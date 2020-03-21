﻿#ifndef  LBPCH_H
#define LBPCH_H
#include <stl/Logger.h>
#ifdef LIGHTBASE_EXPORTS
extern Logger<stdio_commit> LOG;
#endif
#include<cstdio>
#include<cstring>
#include<string>
#include<string_view>
#include<functional>
#include<memory>
#include<vector>
#include<unordered_map>
#include<list>
#include<type_traits>
using std::string, std::string_view,std::shared_ptr,std::unique_ptr,std::vector,std::unordered_map,
std::ifstream,std::ofstream,std::function;
#include"api/hash.h"
#include"api/lightbase.h"
#include"api/hook.h"
#include"api/Loader.h"
#include<mcapi/Core.h>
#include<api/serviceLocate.h>
#include<stl/views.h>
#include<api/types/types.h>
#include<api/event/event_pch.h>

#include<streambuf>
static inline string ifs2str(std::ifstream& ifs) {
	return { (std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>() };
}

/*
#ifdef JSON_SUPPORT
#include<rapidjson/document.h>
#include<rapidjson/error/en.h>
#ifdef JSON_WRTIE
#include<rapidjson/writer.h>
#include<rapidjson/stringbuffer.h>
#endif
#endif*/
#endif