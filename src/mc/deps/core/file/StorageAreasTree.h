#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    struct TreeNode;
#else // @header-generator platform
#endif // @header-generator platform
    struct TreeChild;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TreeNode;
#endif // @header-generator platform
    // clang-format on

    // StorageAreasTree inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TreeNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<Core::StorageAreasTree::TreeChild>> mChildren;
        ::ll::TypedStorage<8, 8, ::Core::FileStorageArea*>                        mStorageArea;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct TreeChild {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::HashedString>                                   mKey;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::StorageAreasTree::TreeNode>> mNode;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 48> mUnk56eb22;
        ::ll::UntypedStorage<8, 8>  mUnkd67789;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        TreeChild& operator=(TreeChild const&);
        TreeChild(TreeChild const&);
        TreeChild();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TreeNode {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~TreeChild();
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk96dd77;
        ::ll::UntypedStorage<8, 8>  mUnk37f7a2;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        TreeNode& operator=(TreeNode const&);
        TreeNode(TreeNode const&);
        TreeNode();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Core::StorageAreasTree::TreeNode>  mRoot;
    ::ll::TypedStorage<8, 24, std::vector<Core::FileStorageArea*>> mStorageAreas;
    ::ll::TypedStorage<4, 40, std::mutex>                          mMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk4e6c3d;
    ::ll::UntypedStorage<8, 24> mUnk616396;
    ::ll::UntypedStorage<8, 80> mUnk72fcd7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StorageAreasTree& operator=(StorageAreasTree const&);
    StorageAreasTree(StorageAreasTree const&);
    StorageAreasTree();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachStorageArea(std::function<void(Core::FileStorageArea&)>&&);
#else // @header-generator platform
    MCNAPI void forEachStorageArea(::std::function<void(::Core::FileStorageArea&)>&& visitorFunction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::shared_ptr<Core::FileStorageArea>, std::error_code>
        getStorageArea(::Core::PathView) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::std::shared_ptr<::Core::FileStorageArea>> getStorageArea(::Core::PathView path) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void insertStorageArea(::Core::FileStorageArea&);
#else // @header-generator platform
    MCNAPI void insertStorageArea(::Core::FileStorageArea& storageArea);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeStorageArea(::Core::FileStorageArea&);
#else // @header-generator platform
    MCNAPI void removeStorageArea(::Core::FileStorageArea& storageArea);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void teardown(std::function<void(Core::FileStorageArea&)>&&);

    MCNAPI ~StorageAreasTree();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void teardown(::std::function<void(::Core::FileStorageArea&)>&& teardownCallback);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
