#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/external/bgfx/c99/bgfx_fatal_s.h"
#include "mc/external/bgfx/c99/bgfx_texture_format.h"

// auto generated forward declare list
// clang-format off
struct bgfx_callback_interface_s;
// clang-format on

struct bgfx_callback_vtbl_s {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, ::bgfx_fatal_s, char const*)> fatal;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, char const*, ushort, char const*, ::__va_list)> trace_vargs;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, char const*, uint, char const*, char const*, ushort)> profiler_begin;
    ::ll::TypedStorage<8, 8, void*(*)(::bgfx_callback_interface_s*, char const*, uint, char const*, char const*, ushort)> allocate_profiler_token;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, void*)> deallocate_profiler_token;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, void*)> profiler_begin_literal;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*)> profiler_end;
    ::ll::TypedStorage<8, 8, long(*)(::bgfx_callback_interface_s*)> profiler_timestamp;
    ::ll::TypedStorage<8, 8, uchar(*)(::bgfx_callback_interface_s*, char const*, long, float, bool, bool)> profiler_gpu_context_create;
    ::ll::TypedStorage<8, 8, uint(*)(::bgfx_callback_interface_s*, char const*, uchar)> profiler_gpu_begin;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, uint)> profiler_gpu_end;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, uint, long, long)> profiler_gpu_emit;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, uint, long, long, long)> profiler_gpu_sync;
    ::ll::TypedStorage<8, 8, uint(*)(::bgfx_callback_interface_s*, ulong)> cache_read_size;
    ::ll::TypedStorage<8, 8, bool(*)(::bgfx_callback_interface_s*, ulong, void*, uint)> cache_read;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, ulong, void const*, uint)> cache_write;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, char const*, uint, uint, uint, void const*, uint, bool)> screen_shot;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, uint, uint, uint, ::bgfx_texture_format, bool)> capture_begin;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*)> capture_end;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, void const*, uint)> capture_frame;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, void*, uint const, void(*)(void*, uint const))> parallel_foreach;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_callback_interface_s*, void*)> prerender_command_buffer;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
