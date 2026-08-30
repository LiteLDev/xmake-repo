#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class PackAccessStrategy;
namespace Core { class Path; }
// clang-format on

class LevelLooseFileStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mConstructor;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelLooseFileStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelLooseFileStorage(
        ::Core::Path const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );

    MCNAPI std::unique_ptr<PackAccessStrategy> getAccessStrategy() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::Path const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );
    // NOLINTEND
};
