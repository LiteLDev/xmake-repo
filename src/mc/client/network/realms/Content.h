#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/ContentType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class Pack;
struct PackContentItem;
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct Content {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Realms::ContentType> type;
    ::ll::TypedStorage<8, 24, std::string>          contentId;
    ::ll::TypedStorage<8, 24, std::string>          parentPackId;
    ::ll::TypedStorage<8, 24, std::string>          name;
    ::ll::TypedStorage<8, 24, std::string>          description;
    ::ll::UntypedStorage<8, 24>                     version;
    ::ll::TypedStorage<8, 8, ulong>                 position;
    ::ll::TypedStorage<4, 4, int>                   subpackIndex;
    ::ll::TypedStorage<1, 1, bool>                  isMarketplacePack;
    // NOLINTEND

public:
    // prevent constructor by default
    Content(Content const&);
    Content();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Content(::Realms::Content&&);

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::Realms::Content const&) const;

    MCNAPI ::gsl::not_null<std::shared_ptr<Pack>> toUnknownPack() const;

    MCNAPI ~Content();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::Content fromContentItem(::Realms::ContentType, ::PackContentItem const&);

    MCNAPI static ::Realms::Content fromJson(::Json::Value const&, ulong, std::string);

    MCNAPI static ::Json::Value toJson(::Realms::Content const&);

    MCNAPI static std::vector<gsl::not_null<std::shared_ptr<Pack>>>
    toUnknownPackList(std::vector<Realms::Content> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::Content&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct Content {};
#endif // @header-generator platform

} // namespace Realms
