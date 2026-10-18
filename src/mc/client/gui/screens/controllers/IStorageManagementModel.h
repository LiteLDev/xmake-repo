#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class I18n;
class PackManifest;
struct ContentItem;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class I18n;
class PackManifest;
struct ContentItem;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class IStorageManagementModel {
public:
    // IStorageManagementModel inner types declare
    // clang-format off
    struct PremiumWorldInfo;
    // clang-format on

    // IStorageManagementModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PremiumWorldInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWorldExists;
        ::ll::TypedStorage<1, 1, bool> mWorldIsPremium;
        ::ll::TypedStorage<1, 1, bool> mIsPremiumOwned;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStorageManagementModel() = default;

    virtual bool isPremiumLocked(::PackManifest const&) const = 0;

    virtual ::IStorageManagementModel::PremiumWorldInfo getWorldInfo(std::string const&) const = 0;

    virtual ::I18n& getI18n() const = 0;

    virtual void clearCompletedDownloads() = 0;

    virtual void navigateToDeleteProgressScreen(std::vector<std::shared_ptr<const ContentItem>>) = 0;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PremiumWorldInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWorldExists;
        ::ll::TypedStorage<1, 1, bool> mWorldIsPremium;
        ::ll::TypedStorage<1, 1, bool> mIsPremiumOwned;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStorageManagementModel() = default;

    virtual bool isPremiumLocked(::PackManifest const& manifest) const = 0;

    virtual ::IStorageManagementModel::PremiumWorldInfo getWorldInfo(::std::string const& worldId) const = 0;

    virtual ::I18n& getI18n() const = 0;

    virtual void clearCompletedDownloads() = 0;

    virtual void navigateToDeleteProgressScreen(::std::vector<::std::shared_ptr<::ContentItem const>> toDelete) = 0;
    // NOLINTEND
#else // @header-generator platform
    struct PremiumWorldInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};
