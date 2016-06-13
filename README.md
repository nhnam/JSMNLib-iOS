# JSMNLib-iOS 0.0.1 (in development progress)
JSMN JSON parser for iOS

# JSMN
jsmn (pronounced like ‘jasmine’) is a minimalistic JSON parser in C. It can be easily integrated into the resource-limited projects or embedded systems.
Library sources are available at https://github.com/zserge/jsmn.

Usually JSON parsers convert JSON string to internal object representation. But if you are using C it becomes tricky as there is no hash tables, no reflection etc. That’s why most JSON parsers written in C try to reinvent the wheel, and either invent custom JSON-like objects, custom hash maps, or use callbacks like SAX parsers do.

jsmn is missing all that functionality, but instead is designed to be robust (it should work fine even with erroneous data), fast (it parses data on the fly and is re-entrant), portable (no superfluous dependencies or non-standard C extensions). And of course, simplicity is a key feature.
