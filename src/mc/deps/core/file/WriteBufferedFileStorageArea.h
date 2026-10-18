#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStorageArea.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class MemoryFileSystem; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class WriteBufferedFileStorageArea : public ::Core::FileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<Core::FileStorageArea>>    mTargetStorageArea;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::MemoryFileSystem>> mMemoryFileSystem;
    ::ll::UntypedStorage<8, 40>                                        mDiskFilesMarkedForDelete;
    ::ll::TypedStorage<4, 40, std::mutex>                              mDiskFilesMarkedForDeleteMutex;
    ::ll::UntypedStorage<8, 24>                                        mIgnoredDirectories;
    ::ll::TypedStorage<1, 1, bool>                                     mBufferEnabled;
    ::ll::TypedStorage<1, 1, bool>                                     mHadWritesWhileDisabled;
    ::ll::TypedStorage<1, 1, bool>                                     mDirectoryStructureReady;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkb8f56f;
    ::ll::UntypedStorage<8, 16> mUnk847197;
    ::ll::UntypedStorage<8, 64> mUnk3c69ca;
    ::ll::UntypedStorage<8, 80> mUnkba13b1;
    ::ll::UntypedStorage<8, 24> mUnk5b52d0;
    ::ll::UntypedStorage<1, 1>  mUnk13aec3;
    ::ll::UntypedStorage<1, 1>  mUnk61c0ed;
    ::ll::UntypedStorage<1, 1>  mUnkafc03c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WriteBufferedFileStorageArea& operator=(WriteBufferedFileStorageArea const&);
    WriteBufferedFileStorageArea(WriteBufferedFileStorageArea const&);
#endif // @header-generator platform
    WriteBufferedFileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WriteBufferedFileStorageArea() = default;
#else // @header-generator platform
    virtual ~WriteBufferedFileStorageArea() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType);
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool supportsSizeQuery() const;
#else // @header-generator platform
    virtual bool supportsSizeQuery() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTotalSize() const;
#else // @header-generator platform
    virtual uint64 getTotalSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getUsedSize(ulong&);
#else // @header-generator platform
    virtual ::Core::Result getUsedSize(uint64&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool handlesPendingWrites() const;
#else // @header-generator platform
    virtual uint64 getTransactionWriteSizeLimit() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void informPendingWriteSize(ulong, bool const);
#else // @header-generator platform
    virtual bool handlesPendingWrites() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong estimatePendingWriteDiskSize(ulong) const;
#else // @header-generator platform
    virtual void informPendingWriteSize(uint64, bool const) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void informStorageAreaCopy(ulong);
#else // @header-generator platform
    virtual uint64 estimatePendingWriteDiskSize(uint64 rawFileSize) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushImmediately(::Core::PathView);
#else // @header-generator platform
    virtual void informStorageAreaCopy(uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void enableFlushToDisk(bool);
#else // @header-generator platform
    virtual ::Core::Result setSaveDataIcon(::Core::PathView) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkCorrupt(bool);
#else // @header-generator platform
    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;
#else // @header-generator platform
    virtual void flushImmediately(::Core::PathView flushPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTransactionWriteSizeLimit() const;
#else // @header-generator platform
    virtual void enableFlushToDisk(bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result setSaveDataIcon(::Core::PathView);
#else // @header-generator platform
    virtual bool checkCorrupt(bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onTeardown();
#else // @header-generator platform
    virtual void _onTeardown() /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
