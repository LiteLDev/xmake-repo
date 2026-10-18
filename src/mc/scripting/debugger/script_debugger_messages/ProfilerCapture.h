#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace ScriptDebuggerMessages {

#if defined(LL_PLAT_A) // @header-generator platform
class ProfilerCapture : public ::ScriptDebuggerMessages::EventEnvelope<ScriptDebuggerMessages::ProfilerCapture> {
#else // @header-generator platform
class ProfilerCapture : public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ProfilerCapture> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCapturesBasePath;
    ::ll::TypedStorage<8, 24, std::string> mCaptureData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb80510;
    ::ll::UntypedStorage<8, 32> mUnkdcf7c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerCapture();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfilerCapture() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfilerCapture(::ScriptDebuggerMessages::ProfilerCapture const&);

    MCNAPI ProfilerCapture(::std::string const& captureBasePath, ::std::string&& captureData);

    MCNAPI ::ScriptDebuggerMessages::ProfilerCapture& operator=(::ScriptDebuggerMessages::ProfilerCapture&&);

    MCNAPI ::ScriptDebuggerMessages::ProfilerCapture& operator=(::ScriptDebuggerMessages::ProfilerCapture const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::ProfilerCapture const&);

    MCNAPI void* $ctor(::std::string const& captureBasePath, ::std::string&& captureData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
