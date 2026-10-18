#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
#if defined(LL_PLAT_A) // @header-generator platform
class PackAccessStrategy;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
// clang-format on

class LevelLooseFileStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mConstructor;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk49fb12;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelLooseFileStorage& operator=(LevelLooseFileStorage const&);
    LevelLooseFileStorage(LevelLooseFileStorage const&);
#endif // @header-generator platform
    LevelLooseFileStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelLooseFileStorage(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::Path const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
#else // @header-generator platform
        ::Core::Path const&                                               levelDirectory,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI std::unique_ptr<PackAccessStrategy> getAccessStrategy() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Core::Path const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
#else // @header-generator platform
        ::Core::Path const&                                               levelDirectory,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
#endif // @header-generator platform
    );
    // NOLINTEND
};
