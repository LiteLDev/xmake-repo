#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "cstdarg"
#include "mc/external/bgfx/CallbackI.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/fatal/Fatal.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct CallbackStub : public ::bgfx::CallbackI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CallbackStub();

    virtual void fatal(::bgfx::Fatal::Enum, char const*);

    virtual void traceVargs(char const*, ushort, char const*, ::__va_list);

    virtual std::shared_ptr<void> allocateProfilerTokenDev(char const*, uint, std::source_location const&);

    virtual std::shared_ptr<void> allocateProfilerTokenRetail(char const*, uint, std::source_location const&);

    virtual std::shared_ptr<void> allocateProfilerTokenRetailPlus(char const*, uint, std::source_location const&);

    virtual void profilerBegin(std::shared_ptr<void> const&);

    virtual void profilerEnd();

    virtual long profilerTimestamp();

    virtual uchar profilerGPUContextCreate(char const*, long, float, bool, bool);

    virtual uint profilerGPUBegin(char const*, uchar);

    virtual void profilerGPUEnd(uint);

    virtual void profilerGPUEmit(uint, long, long);

    virtual void profilerGPUSync(uchar, long, long, long);

    virtual uint cacheReadSize(ulong);

    virtual bool cacheRead(ulong, void*, uint);

    virtual void cacheWrite(ulong, void const*, uint);

    virtual void screenShot(char const*, uint, uint, uint, void const*, uint, bool);

    virtual void captureBegin(uint, uint, uint, ::bgfx::TextureFormat::Enum, bool);

    virtual void captureEnd();

    virtual void captureFrame(void const*, uint);

    virtual void parallelForeach(void*, uint const, void (*)(void*, uint const));

    virtual void postRenderCommandBuffer(void*);

    virtual void debugLayerOutputCallback(char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fatal(::bgfx::Fatal::Enum, char const*);

    MCNAPI void $traceVargs(char const*, ushort, char const*, ::__va_list);

    MCNAPI std::shared_ptr<void> $allocateProfilerTokenDev(char const*, uint, std::source_location const&);

    MCNAPI std::shared_ptr<void> $allocateProfilerTokenRetail(char const*, uint, std::source_location const&);

    MCNAPI std::shared_ptr<void> $allocateProfilerTokenRetailPlus(char const*, uint, std::source_location const&);

    MCNAPI void $profilerBegin(std::shared_ptr<void> const&);

    MCNAPI void $profilerEnd();

    MCNAPI long $profilerTimestamp();

    MCNAPI uchar $profilerGPUContextCreate(char const*, long, float, bool, bool);

    MCNAPI uint $profilerGPUBegin(char const*, uchar);

    MCNAPI void $profilerGPUEnd(uint);

    MCNAPI void $profilerGPUEmit(uint, long, long);

    MCNAPI void $profilerGPUSync(uchar, long, long, long);

    MCNAPI uint $cacheReadSize(ulong);

    MCNAPI bool $cacheRead(ulong, void*, uint);

    MCNAPI void $cacheWrite(ulong, void const*, uint);

    MCNAPI void $screenShot(char const*, uint, uint, uint, void const*, uint, bool);

    MCNAPI void $captureBegin(uint, uint, uint, ::bgfx::TextureFormat::Enum, bool);

    MCNAPI void $captureEnd();

    MCNAPI void $captureFrame(void const*, uint);

    MCNAPI void $parallelForeach(void*, uint const, void (*)(void*, uint const));

    MCNAPI void $postRenderCommandBuffer(void*);

    MCNAPI void $debugLayerOutputCallback(char const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct CallbackStub {};
#endif // @header-generator platform

} // namespace bgfx
