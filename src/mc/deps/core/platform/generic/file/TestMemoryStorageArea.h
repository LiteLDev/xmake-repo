#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileStorageArea.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { struct TestFileStorageAreaOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FileSystemImpl; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class PathView; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class TestMemoryStorageArea : public ::Core::MemoryFileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mMaxExtendedSize;
    ::ll::UntypedStorage<1, 16>                     mSupportsSizeQuery;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk794e65;
    ::ll::UntypedStorage<1, 1>  mUnk1e137c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TestMemoryStorageArea& operator=(TestMemoryStorageArea const&);
    TestMemoryStorageArea(TestMemoryStorageArea const&);
#endif // @header-generator platform
    TestMemoryStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
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
    virtual ::Core::Result getUsedSize(uint64&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getUsedSize(ulong&);
#else // @header-generator platform
    virtual uint64 getTotalSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool supportsExtendSize() const;
#else // @header-generator platform
    virtual bool supportsExtendSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canExtendSize() const;
#else // @header-generator platform
    virtual bool canExtendSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preemptiveExtendSize(ulong const, std::function<void()>, std::function<void()>);
#else // @header-generator platform
    virtual void preemptiveExtendSize(uint64 const, ::std::function<void()>, ::std::function<void()>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTransactionWriteSizeLimit() const;
#else // @header-generator platform
    virtual uint64 getTransactionWriteSizeLimit() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _commit();
#else // @header-generator platform
    virtual ::Core::Result _commit() /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
