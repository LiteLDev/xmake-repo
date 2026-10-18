#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "cstdarg"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/fatal/Fatal.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct CallbackI {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CallbackI() = 0;

    virtual void fatal(::bgfx::Fatal::Enum, char const*) = 0;

    virtual void traceVargs(char const*, ushort, char const*, ::__va_list) = 0;

    virtual std::shared_ptr<void> allocateProfilerTokenDev(char const*, uint, std::source_location const&) = 0;

    virtual std::shared_ptr<void> allocateProfilerTokenRetail(char const*, uint, std::source_location const&) = 0;

    virtual std::shared_ptr<void> allocateProfilerTokenRetailPlus(char const*, uint, std::source_location const&) = 0;

    virtual void profilerBegin(std::shared_ptr<void> const&) = 0;

    virtual void profilerEnd() = 0;

    virtual long profilerTimestamp() = 0;

    virtual uchar profilerGPUContextCreate(char const*, long, float, bool, bool) = 0;

    virtual uint profilerGPUBegin(char const*, uchar) = 0;

    virtual void profilerGPUEnd(uint) = 0;

    virtual void profilerGPUEmit(uint, long, long) = 0;

    virtual void profilerGPUSync(uchar, long, long, long) = 0;

    virtual uint cacheReadSize(ulong) = 0;

    virtual bool cacheRead(ulong, void*, uint) = 0;

    virtual void cacheWrite(ulong, void const*, uint) = 0;

    virtual void screenShot(char const*, uint, uint, uint, void const*, uint, bool) = 0;

    virtual void captureBegin(uint, uint, uint, ::bgfx::TextureFormat::Enum, bool) = 0;

    virtual void captureEnd() = 0;

    virtual void captureFrame(void const*, uint) = 0;

    virtual void parallelForeach(void*, uint const, void(*)(void*, uint const)) = 0;

    virtual void postRenderCommandBuffer(void*) = 0;

    virtual void debugLayerOutputCallback(char const*) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct CallbackI {};
#endif // @header-generator platform

} // namespace bgfx
