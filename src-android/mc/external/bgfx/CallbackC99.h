#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/external/bgfx/CallbackI.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/fatal/Fatal.h"

// auto generated forward declare list
// clang-format off
struct bgfx_callback_interface_s;
// clang-format on

namespace bgfx {

struct CallbackC99 : public ::bgfx::CallbackI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx_callback_interface_s*> m_interface;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CallbackC99() = default;

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
};

} // namespace bgfx
