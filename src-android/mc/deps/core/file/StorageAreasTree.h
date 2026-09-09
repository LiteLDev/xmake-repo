#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class StorageAreasTree {
public:
    // StorageAreasTree inner types declare
    // clang-format off
    struct TreeNode;
    struct TreeChild;
    // clang-format on

    // StorageAreasTree inner types define
    struct TreeNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<Core::StorageAreasTree::TreeChild>> mChildren;
        ::ll::TypedStorage<8, 8, ::Core::FileStorageArea*>                        mStorageArea;
        // NOLINTEND
    };

    struct TreeChild {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>                                   mKey;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::StorageAreasTree::TreeNode>> mNode;
        // NOLINTEND

    public:
        // prevent constructor by default
        TreeChild& operator=(TreeChild const&);
        TreeChild(TreeChild const&);
        TreeChild();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TreeChild();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::StorageAreasTree::TreeNode>  mRoot;
    ::ll::TypedStorage<8, 24, std::vector<Core::FileStorageArea*>> mStorageAreas;
    ::ll::TypedStorage<4, 40, std::mutex>                          mMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forEachStorageArea(std::function<void(Core::FileStorageArea&)>&&);

    MCNAPI ::Bedrock::Result<std::shared_ptr<Core::FileStorageArea>, std::error_code>
        getStorageArea(::Core::PathView) const;

    MCNAPI void insertStorageArea(::Core::FileStorageArea&);

    MCNAPI void removeStorageArea(::Core::FileStorageArea&);

    MCNAPI void teardown(std::function<void(Core::FileStorageArea&)>&&);

    MCNAPI ~StorageAreasTree();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
