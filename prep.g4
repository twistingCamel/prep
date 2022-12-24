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

prog: (funcDef | declDef)+ EOF;
