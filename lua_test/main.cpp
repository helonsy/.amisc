//g++ main.cpp -llua -lm -ldl
#include <iostream>

extern "C"
{
#include <lua.h>
#include <lauxlib.h>
#include<lualib.h>
}

using namespace std;


int main(int argc, char **argv)
{
	std::cout << "Hello Lua" << std::endl;

	lua_State *L = luaL_newstate();
	luaL_openlibs(L);

	int ret = luaL_dofile(L, "ext.lua");
	if (ret)
	{
		std::cout << "load lua file fail error" << std::endl;
	}

	lua_getglobal(L, "lua_main");
	lua_pushinteger(L, 1);
	lua_pushinteger(L, 2);

	ret = lua_pcall(L, 2, 1, 0);
	if (ret)
	{
		std::cout << "pcall error" << std::endl;
	}

	ret = (int)lua_tointeger(L, -1);
	std::cout << "return:" << ret << std::endl;

	return 0;
}
