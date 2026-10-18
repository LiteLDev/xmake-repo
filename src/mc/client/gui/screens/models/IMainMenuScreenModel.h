#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/NetworkFilter.h"

// auto generated forward declare list
// clang-format off
class DlcId;
struct WorldTemplateInfo;
namespace mce { class UUID; }
// clang-format on

class IMainMenuScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IMainMenuScreenModel() = default;

    virtual void navigateToDlcProgressScreen(std::vector<DlcId> const&, std::function<void (bool, bool)>, bool, bool, bool) = 0;

    virtual bool isNetworkEnabled(::NetworkFilter) const = 0;

    virtual bool doesPlatformSupportRealms() const = 0;

    virtual bool isPackIdInRealmsPlus(std::string const&) const = 0;

    virtual void repopulateWorldTemplates() = 0;

    virtual ::WorldTemplateInfo const* findWorldTemplateByUUID(std::vector<mce::UUID> const&) const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/NetworkFilter.h"

// auto generated forward declare list
// clang-format off
class DlcId;
struct WorldTemplateInfo;
namespace mce { class UUID; }
// clang-format on

class IMainMenuScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMainMenuScreenModel() = default;

    virtual void navigateToDlcProgressScreen(
        ::std::vector<::DlcId> const&     dlcIds,
        ::std::function<void(bool, bool)> callback,
        bool                              showCloseButton,
        bool                              processingUpdates,
        bool                              requireCancelToExit
    ) = 0;

    virtual bool isNetworkEnabled(::NetworkFilter withFilter) const = 0;

    virtual bool doesPlatformSupportRealms() const = 0;

    virtual bool isPackIdInRealmsPlus(::std::string const& packId) const = 0;

    virtual void repopulateWorldTemplates() = 0;

    virtual ::WorldTemplateInfo const* findWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IMainMenuScreenModel {};
#endif // @header-generator platform
#endif // @header-generator platform
