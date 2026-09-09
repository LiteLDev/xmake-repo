#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class LinkedAssetValidator : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LinkedAssetValidator inner types declare
    // clang-format off
    struct Reference;
    struct KnownObject;
    struct KnownObjectHasher;
    struct AssetCollection;
    // clang-format on

    // LinkedAssetValidator inner types define
    enum class ValidatorStatus : uchar {
        New       = 0,
        Loaded    = 1,
        Validated = 2,
    };

    struct Reference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>          mAssetType;
        ::ll::TypedStorage<8, 24, std::string> mIdentifier;
        ::ll::TypedStorage<8, 24, std::string> mReferencedFromContext;
        // NOLINTEND

    public:
        // prevent constructor by default
        Reference& operator=(Reference const&);
        Reference(Reference const&);
        Reference();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Reference();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct KnownObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>          mAssetType;
        ::ll::TypedStorage<8, 24, std::string> mIdentifier;
        // NOLINTEND
    };

    struct KnownObjectHasher {};

    struct AssetCollection {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<1, 1, bool> mIsClientAssetCollection;
        ::ll::TypedStorage<8, 24, std::vector<LinkedAssetValidator::Reference>> mAssetReferences;
        ::ll::TypedStorage<8, 24, std::vector<LinkedAssetValidator::Reference>> mFileReferences;
        ::ll::TypedStorage<8, 40, std::unordered_set<LinkedAssetValidator::KnownObject, LinkedAssetValidator::KnownObjectHasher, std::equal_to<LinkedAssetValidator::KnownObject>, std::allocator<LinkedAssetValidator::KnownObject>>> mAllIdentifiers;
        ::ll::TypedStorage<8, 40, std::unordered_set<LinkedAssetValidator::KnownObject, LinkedAssetValidator::KnownObjectHasher, std::equal_to<LinkedAssetValidator::KnownObject>, std::allocator<LinkedAssetValidator::KnownObject>>> mAllFiles;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        AssetCollection();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                                  mAllAssetCollections;
    ::ll::TypedStorage<1, 1, std::atomic<LinkedAssetValidator::ValidatorStatus>> mIsLoadingReferences;
    ::ll::TypedStorage<1, 1, bool const>                                         mIsClient;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkedAssetValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinkedAssetValidator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LinkedAssetValidator(bool);

    MCNAPI void _initThreadAssetCollection();

    MCNAPI void addFile(int, std::string const&);

    MCNAPI void addFileReference(int, std::string const&, std::string);

    MCNAPI void addIdentifier(int, std::string const&);

    MCNAPI void addReference(int, std::string const&, std::string);

    MCNAPI void finishLoading();

    MCNAPI bool isClient() const;

    MCNAPI void reset();

    MCNAPI std::vector<std::string> validateLinkedAssets();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::weak_ptr<LinkedAssetValidator::AssetCollection>& mPerThreadAssetCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
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
    // NOLINTEND
};
