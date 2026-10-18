#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/BaseGameVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BaseGameVersion;
#endif // @header-generator platform
class IResourcePackRepository;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePack;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackStack;
namespace mce { class UUID; }
// clang-format on

class BaseGamePackSlices {
public:
    // BaseGamePackSlices inner types declare
    // clang-format off
    struct BaseGameVersionPack;
    // clang-format on

    // BaseGamePackSlices inner types define
    struct BaseGameVersionPack {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 32>                                               mBaseGameVersion;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ResourcePack>>> mPack;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk745cd0;
        ::ll::UntypedStorage<8, 16> mUnkb82ad5;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        BaseGameVersionPack& operator=(BaseGameVersionPack const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        BaseGameVersionPack(BaseGameVersionPack const&);
#endif // @header-generator platform
        BaseGameVersionPack();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BaseGameVersionPack();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BaseGamePackSlices::BaseGameVersionPack>> mBaseGameVersionPacks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkbc0bb2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BaseGamePackSlices& operator=(BaseGamePackSlices const&);
    BaseGamePackSlices(BaseGamePackSlices const&);
    BaseGamePackSlices();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseGamePackSlices();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void addFromVersions(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<BaseGameVersion> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        ::mce::UUID const&
#else // @header-generator platform
        ::std::vector<::BaseGameVersion> const&                               baseGameVersions,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& resourcePackRepository,
        ::mce::UUID const&                                                    packId
#endif // @header-generator platform
    );

    MCNAPI void applyPackSlices(
#if defined(LL_PLAT_A) // @header-generator platform
        ::BaseGameVersion const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        ::ResourcePackStack&
#else // @header-generator platform
        ::BaseGameVersion const&                                              baseGameVersion,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& resourcePackRepository,
        ::ResourcePackStack&                                                  packStack
#endif // @header-generator platform
    ) const;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
