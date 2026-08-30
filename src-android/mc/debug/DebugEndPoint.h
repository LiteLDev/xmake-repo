#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/resources/ResourcePackManager.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DebugEndPoint : public ::ContentLogEndPoint {
public:
    // DebugEndPoint inner types declare
    // clang-format off
    class VanillaWorldChecker;
    // clang-format on

    // DebugEndPoint inner types define
    class VanillaWorldChecker : public ::ResourcePackListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<ResourcePackManager*, bool>> mResourceManagersInVanilla;
        ::ll::TypedStorage<1, 1, bool>                                            mHasNonVanillaPacks;
        ::ll::TypedStorage<1, 1, bool>                                            mHasNonVanillaWorldData;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onActiveResourcePacksChanged(::ResourcePackManager&);

        virtual void onResourceManagerDestroyed(::ResourcePackManager&);
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void checkWorldData(::Core::Path const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::DebugEndPoint::VanillaWorldChecker> mVanillaWorldChecker;
    ::ll::TypedStorage<1, 1, bool>                                  mEnabled;
    ::ll::TypedStorage<4, 8, std::optional<LogLevel>>               mMinLogLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void log(::LogArea const, ::LogLevel const, char const*);

    virtual bool logOnlyOnce() const;

    virtual void flush();

    virtual void setEnabled(bool);

    virtual bool isEnabled() const;

    virtual void contentAssert(::LogArea const, ::LogLevel const, char const*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializeContentLogging(::ResourcePackManager&, ::Core::Path const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<LogArea, bool> const& mAssertAreas();
    // NOLINTEND
};
