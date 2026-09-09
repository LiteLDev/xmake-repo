#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileStorageArea.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct TestFileStorageAreaOptions; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class TestMemoryStorageArea : public ::Core::MemoryFileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mMaxExtendedSize;
    ::ll::UntypedStorage<1, 16>                     mSupportsSizeQuery;
    // NOLINTEND

public:
    // prevent constructor by default
    TestMemoryStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType);

    virtual bool supportsSizeQuery() const;

    virtual ulong getTotalSize() const;

    virtual ::Core::Result getUsedSize(ulong&);

    virtual bool supportsExtendSize() const;

    virtual bool canExtendSize() const;

    virtual void preemptiveExtendSize(ulong const, std::function<void()>, std::function<void()>);

    virtual ulong getTransactionWriteSizeLimit() const;

    virtual ::Core::Result _commit();
    // NOLINTEND
};

} // namespace Bedrock
