#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/BasicLockbox.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class LinkedAssetValidator : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LinkedAssetValidator inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct Reference;
#else // @header-generator platform
#endif // @header-generator platform
    struct KnownObject;
    struct KnownObjectHasher;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Reference;
#endif // @header-generator platform
    struct AssetCollection;
    // clang-format on

    // LinkedAssetValidator inner types define
    enum class ValidatorStatus : uchar {
        New       = 0,
        Loaded    = 1,
        Validated = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct KnownObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk34eb49;
        ::ll::UntypedStorage<8, 32> mUnka5ac8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        KnownObject& operator=(KnownObject const&);
        KnownObject(KnownObject const&);
        KnownObject();
    };

    struct KnownObjectHasher {};

#endif // @header-generator platform
    struct Reference {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int>          mAssetType;
        ::ll::TypedStorage<8, 24, std::string> mIdentifier;
        ::ll::TypedStorage<8, 24, std::string> mReferencedFromContext;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnk6cb2bf;
        ::ll::UntypedStorage<8, 32> mUnk41daf1;
        ::ll::UntypedStorage<8, 32> mUnkce0e5d;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Reference& operator=(Reference const&);
        Reference(Reference const&);
        Reference();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    struct KnownObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>          mAssetType;
        ::ll::TypedStorage<8, 24, std::string> mIdentifier;
        // NOLINTEND
    };

    struct KnownObjectHasher {};
#else // @header-generator platform
#endif // @header-generator platform

    struct AssetCollection {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<1, 1, bool> mIsClientAssetCollection;
        ::ll::TypedStorage<8, 24, std::vector<LinkedAssetValidator::Reference>> mAssetReferences;
        ::ll::TypedStorage<8, 24, std::vector<LinkedAssetValidator::Reference>> mFileReferences;
        ::ll::TypedStorage<8, 40, std::unordered_set<LinkedAssetValidator::KnownObject, LinkedAssetValidator::KnownObjectHasher, std::equal_to<LinkedAssetValidator::KnownObject>, std::allocator<LinkedAssetValidator::KnownObject>>> mAllIdentifiers;
        ::ll::TypedStorage<8, 40, std::unordered_set<LinkedAssetValidator::KnownObject, LinkedAssetValidator::KnownObjectHasher, std::equal_to<LinkedAssetValidator::KnownObject>, std::allocator<LinkedAssetValidator::KnownObject>>> mAllFiles;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnkb4df7f;
        ::ll::UntypedStorage<8, 24> mUnkce6ed9;
        ::ll::UntypedStorage<8, 24> mUnk76fe3d;
        ::ll::UntypedStorage<8, 64> mUnkd26c34;
        ::ll::UntypedStorage<8, 64> mUnkf668bd;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        AssetCollection& operator=(AssetCollection const&);
        AssetCollection(AssetCollection const&);
#endif // @header-generator platform
        AssetCollection();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64>                                                  mAllAssetCollections;
    ::ll::TypedStorage<1, 1, std::atomic<LinkedAssetValidator::ValidatorStatus>> mIsLoadingReferences;
    ::ll::TypedStorage<1, 1, bool const>                                         mIsClient;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 104> mUnk23ba6e;
    ::ll::UntypedStorage<1, 1>   mUnk86474b;
    ::ll::UntypedStorage<1, 1>   mUnk1d7f18;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LinkedAssetValidator& operator=(LinkedAssetValidator const&);
    LinkedAssetValidator(LinkedAssetValidator const&);
#endif // @header-generator platform
    LinkedAssetValidator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LinkedAssetValidator();
#else // @header-generator platform
    virtual ~LinkedAssetValidator() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LinkedAssetValidator(bool);
#else // @header-generator platform
    MCNAPI explicit LinkedAssetValidator(bool isClient);
#endif // @header-generator platform

    MCNAPI void _initThreadAssetCollection();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFile(int, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void addFile(int assetType, ::std::string const& filepath);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFileReference(int, std::string const&, std::string);
#else // @header-generator platform
    MCNAPI void addFileReference(int assetType, ::std::string const& filepath, ::std::string contextString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addIdentifier(int, std::string const&);
#else // @header-generator platform
    MCNAPI void addIdentifier(int assetType, ::std::string const& identifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addReference(int, std::string const&, std::string);

    MCNAPI void finishLoading();

    MCNAPI bool isClient() const;
#else // @header-generator platform
    MCNAPI void addReference(int assetType, ::std::string const& identifier, ::std::string contextString);
#endif // @header-generator platform

    MCNAPI void reset();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> validateLinkedAssets();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::std::string> validateLinkedAssets();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::weak_ptr<LinkedAssetValidator::AssetCollection>& mPerThreadAssetCollection();
#else // @header-generator platform
    MCNAPI static ::std::weak_ptr<::LinkedAssetValidator::AssetCollection>& mPerThreadAssetCollection();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
    MCNAPI void* $ctor(bool isClient);
#endif // @header-generator platform
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
