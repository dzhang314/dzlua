#ifndef lundump_h
#define lundump_h

#include "lobject.hpp"
#include "lzio.hpp"

/* load one chunk; from lundump.c */
LUAI_FUNC Proto *luaU_undump(lua_State *L, ZIO *Z, Mbuffer *buff, const char *name);

/* make header; from lundump.c */
LUAI_FUNC void luaU_header(char *h);

/* dump one chunk; from ldump.c */
LUAI_FUNC int luaU_dump(lua_State *L, const Proto *f, lua_Writer w, void *data, int strip);

#ifdef luac_c
/* print one chunk; from print.c */
LUAI_FUNC void luaU_print (const Proto* f, int full);
#endif

/* for header of binary files -- this is Lua 5.1 */
#define LUAC_VERSION        0x51

/* for header of binary files -- this is the official format */
#define LUAC_FORMAT        0

/* size of header of binary files */
#define LUAC_HEADERSIZE        12

#endif
