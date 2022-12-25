grammar prep;

options {
	language = Cpp;
}

Number: [0-9][a-zA-Z0-9_]*;
Ellipses: '...';
Identifier: [a-zA-Z_][a-zA-Z0-9_]*;
WS: [ \t\r\nEOF]+ -> skip;
Eof: EOF -> skip;

CommentBlock: '/*' .*? '*/' -> skip;
CommentLine: '//' ((~('\n' | '\r')) | '\\\n')* -> skip;

blockItem: funcKeyword | bodyStringImplicit;
block: blockItem*;
blockItemNoRecurse: funcKeywordNoRecurse | bodyStringImplicit;
blockNoRecurse: blockItemNoRecurse*;

Define: ('@def' | '@d' | '@define');
Recurse: ('@recurse' | '@r');
Separator: ('@sep' | '@separator' | '@s');
Header: ('@header' | '@h');
Footer: ('@footer' | '@f');
Body: ('@body' | '@b');
parameterPackWithEllipses:
	'(' (
		(Identifier (',' Identifier)* (',' Ellipses)?)
		| Ellipses
	)? ')';
parameterPack: '(' (Identifier (',' Identifier)*)? ')';
parameterSingle: '(' (~')')* ')';

String: '"' (~'"' | '\\"')* '"';
string: String;
bodyStringImplicit: string;

recurse: Recurse parameterPackWithEllipses '@';
separator: Separator string '@';
header: Header string '@';
footer: Footer string '@';
body: Body string '@';

funcKeyword: recurse | separator | header | footer | body;
funcKeywordNoRecurse: separator | header | footer | body;
StringFuncKeyword: Separator | Header | Footer | Body;

funcDef: Define Identifier parameterPackWithEllipses block '@';
declDef: Define Identifier blockNoRecurse '@';

prog: (funcDef | declDef)* EOF;

//TODO: Bug: recursive only calls until ellipsis is empty; in for-each situations, the last one is
// not iterated through; make user have a choice of whether to continue on last or just VA_OPT Note:

// Note: (Maybe): whether recurse is called with ... or __VA_ARGS__

// Note: (Maybe): make a new @base keyword, for the base case
