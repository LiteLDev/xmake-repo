#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct SnapshotFilenameAndLength;
// clang-format on
#endif // @header-generator platform
#endif // @header-generator platform

class IScriptDedicatedServerUtils {
public:
    // IScriptDedicatedServerUtils inner types declare
    // clang-format off
    struct AllowListEntryInfo;
    // clang-format on

    // IScriptDedicatedServerUtils inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct AllowListEntryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, std::optional<std::string>> name;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> xuid;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct AllowListEntryInfo {};
#else // @header-generator platform
    struct AllowListEntryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk8e9055;
        ::ll::UntypedStorage<8, 40> mUnkfd5ece;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllowListEntryInfo& operator=(AllowListEntryInfo const&);
        AllowListEntryInfo(AllowListEntryInfo const&);
        AllowListEntryInfo();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        MCNAPI ~AllowListEntryInfo();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptDedicatedServerUtils() = default;

    virtual void stopServer() = 0;

    virtual bool saveHold() = 0;

    virtual bool saveResume() = 0;

    virtual ::std::optional<::std::vector<::SnapshotFilenameAndLength>> saveQuery() = 0;

    virtual bool addToAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity) = 0;

    virtual bool removeFromAllowList(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity) = 0;

    virtual bool allowListContains(::IScriptDedicatedServerUtils::AllowListEntryInfo const& identity) = 0;

    virtual ::std::vector<::IScriptDedicatedServerUtils::AllowListEntryInfo> getAllowListEntries() const = 0;

    virtual void clearAllowList() = 0;

    virtual bool reloadAllowListFile() = 0;

    virtual void setAllowListEnabled(bool enabled) = 0;

    virtual bool getAllowListEnabled() const = 0;

    virtual bool reloadPermissionsFile() = 0;

    virtual ::std::vector<::std::string> getOperatorXuids() const = 0;

    virtual bool reloadScriptConfig() = 0;

    virtual bool reloadCDNConfig() = 0;

    virtual ::std::string const& getSessionID() const = 0;
    // NOLINTEND
#endif // @header-generator platform
#endif // @header-generator platform
};
