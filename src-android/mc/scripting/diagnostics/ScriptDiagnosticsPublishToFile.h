#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FlushingIOController.h"
#include "mc/deps/core/file/Path.h"
#include "mc/scripting/diagnostics/IScriptStatPublisher.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
namespace Bedrock { template<int T0> class FlushingIOBuffer; }
namespace Core { class OutputFileStream; }
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
        ::ll::UntypedStorage<1, 24>                                       mStreamPath;
        ::ll::TypedStorage<8, 8, long>                                    mStreamSize;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::OutputFileStream>> mFileStream;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamFlusher();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~StreamFlusher();

        virtual ::Core::Result _flushBuffer(void const*, ulong);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Core::Result $_flushBuffer(void const*, ulong);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx&>                                       mCerealContext;
    ::ll::TypedStorage<4, 4, int>                                                            mMaxCaptureFiles;
    ::ll::TypedStorage<4, 4, uint>                                                           mMaxCaptureFileSize;
    ::ll::UntypedStorage<1, 24>                                                              mCaptureBasePath;
    ::ll::TypedStorage<8, 24, std::string>                                                   mCaptureTimeStamp;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDiagnosticsPublishToFile::StreamFlusher>> mStreamFlusher;
    ::ll::UntypedStorage<8, 8>                                                               mFlushingBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsPublishToFile& operator=(ScriptDiagnosticsPublishToFile const&);
    ScriptDiagnosticsPublishToFile(ScriptDiagnosticsPublishToFile const&);
    ScriptDiagnosticsPublishToFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDiagnosticsPublishToFile();

    virtual bool isStatPublisherEnabled() const;

    virtual void publishStats(ulong, std::vector<ScriptStat> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDiagnosticsPublishToFile(::cereal::ReflectionCtx&, bool, std::optional<uint>, std::optional<uint>);

    MCNAPI bool _createNewCapture(::Core::Path);

    MCNAPI ::Core::Path _getCapturePath(int) const;

    MCNAPI bool _initBasePath();

    MCNAPI bool startCapture();

    MCNAPI std::optional<Core::Path> stopCapture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx&, bool, std::optional<uint>, std::optional<uint>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isStatPublisherEnabled() const;

    MCNAPI void $publishStats(ulong, std::vector<ScriptStat> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
