#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FlushingIOController.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/diagnostics/IScriptStatPublisher.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { template<int T0> class FlushingIOBuffer; }
namespace Core { class OutputFileStream; }
#else // @header-generator platform
namespace Core { class Path; }
#endif // @header-generator platform
namespace Core { class Result; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDiagnosticsPublishToFile : public ::IScriptStatPublisher {
public:
    // ScriptDiagnosticsPublishToFile inner types declare
    // clang-format off
    class StreamFlusher;
    // clang-format on

    // ScriptDiagnosticsPublishToFile inner types define
    class StreamFlusher : public ::Bedrock::FlushingIOController::Flusher {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 24>                                       mStreamPath;
        ::ll::TypedStorage<8, 8, long>                                    mStreamSize;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::OutputFileStream>> mFileStream;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnka64202;
        ::ll::UntypedStorage<8, 8>  mUnkf9c1a3;
        ::ll::UntypedStorage<8, 8>  mUnkfe8cec;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        StreamFlusher& operator=(StreamFlusher const&);
        StreamFlusher(StreamFlusher const&);
#endif // @header-generator platform
        StreamFlusher();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~StreamFlusher();
#else // @header-generator platform
        virtual ~StreamFlusher() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Core::Result _flushBuffer(void const*, ulong);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ::Core::Result _flushBuffer(void const* data, uint64 amount) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Core::Result $_flushBuffer(void const*, ulong);
        // NOLINTEND
#else // @header-generator platform
        MCNAPI ::Core::Result $_flushBuffer(void const* data, uint64 amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx&>                                       mCerealContext;
    ::ll::TypedStorage<4, 4, int>                                                            mMaxCaptureFiles;
    ::ll::TypedStorage<4, 4, uint>                                                           mMaxCaptureFileSize;
    ::ll::UntypedStorage<1, 24>                                                              mCaptureBasePath;
    ::ll::TypedStorage<8, 24, std::string>                                                   mCaptureTimeStamp;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDiagnosticsPublishToFile::StreamFlusher>> mStreamFlusher;
    ::ll::UntypedStorage<8, 8>                                                               mFlushingBuffer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkbeba36;
    ::ll::UntypedStorage<4, 4>  mUnkd0b8ad;
    ::ll::UntypedStorage<4, 4>  mUnk547915;
    ::ll::UntypedStorage<8, 32> mUnk4c3726;
    ::ll::UntypedStorage<8, 32> mUnk21bd13;
    ::ll::UntypedStorage<8, 8>  mUnkf50aea;
    ::ll::UntypedStorage<8, 8>  mUnk707dad;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsPublishToFile& operator=(ScriptDiagnosticsPublishToFile const&);
    ScriptDiagnosticsPublishToFile(ScriptDiagnosticsPublishToFile const&);
    ScriptDiagnosticsPublishToFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDiagnosticsPublishToFile();
#else // @header-generator platform
    virtual ~ScriptDiagnosticsPublishToFile() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isStatPublisherEnabled() const;
#else // @header-generator platform
    virtual bool isStatPublisherEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void publishStats(ulong, std::vector<ScriptStat> const&);
#else // @header-generator platform
    virtual void publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptDiagnosticsPublishToFile(::cereal::ReflectionCtx&, bool, std::optional<uint>, std::optional<uint>);
#else // @header-generator platform
    MCNAPI ScriptDiagnosticsPublishToFile(
        ::cereal::ReflectionCtx& ctx,
        bool                     autoStart,
        ::std::optional<uint>    maxCaptureFiles,
        ::std::optional<uint>    maxCaptureFileSize
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _createNewCapture(::Core::Path);
#else // @header-generator platform
    MCNAPI bool _createNewCapture(::Core::Path capturePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Path _getCapturePath(int) const;
#else // @header-generator platform
    MCNAPI ::Core::Path _getCapturePath(int captureIndex) const;
#endif // @header-generator platform

    MCNAPI bool _initBasePath();

    MCNAPI bool startCapture();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Core::Path> stopCapture();
#else // @header-generator platform
    MCNAPI ::std::optional<::Core::Path> stopCapture();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx&, bool, std::optional<uint>, std::optional<uint>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::cereal::ReflectionCtx& ctx,
        bool                     autoStart,
        ::std::optional<uint>    maxCaptureFiles,
        ::std::optional<uint>    maxCaptureFileSize
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isStatPublisherEnabled() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $publishStats(ulong, std::vector<ScriptStat> const&);
#else // @header-generator platform
    MCNAPI void $publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
