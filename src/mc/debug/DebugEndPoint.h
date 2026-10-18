#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/resources/ResourcePackListener.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/ResourcePackManager.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ResourcePackManager;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, std::unordered_map<ResourcePackManager*, bool>> mResourceManagersInVanilla;
        ::ll::TypedStorage<1, 1, bool>                                            mHasNonVanillaPacks;
        ::ll::TypedStorage<1, 1, bool>                                            mHasNonVanillaWorldData;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnka84c93;
        ::ll::UntypedStorage<1, 1>  mUnkac0f45;
        ::ll::UntypedStorage<1, 1>  mUnk6685cb;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        VanillaWorldChecker& operator=(VanillaWorldChecker const&);
        VanillaWorldChecker(VanillaWorldChecker const&);
        VanillaWorldChecker();
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onActiveResourcePacksChanged(::ResourcePackManager&);
#else // @header-generator platform
        virtual void onActiveResourcePacksChanged(::ResourcePackManager& mgr) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual void onResourceManagerDestroyed(::ResourcePackManager&);
#else // @header-generator platform
        virtual void onResourceManagerDestroyed(::ResourcePackManager& mgr) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void checkWorldData(::Core::Path const&);
#else // @header-generator platform
        MCNAPI void checkWorldData(::Core::Path const& levelPath);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        MCNAPI void $dtor();
#endif
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager& mgr);

        MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager& mgr);
#endif


#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::DebugEndPoint::VanillaWorldChecker> mVanillaWorldChecker;
    ::ll::TypedStorage<1, 1, bool>                                  mEnabled;
    ::ll::TypedStorage<4, 8, std::optional<LogLevel>>               mMinLogLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk9aec1e;
    ::ll::UntypedStorage<1, 1>  mUnked2556;
    ::ll::UntypedStorage<4, 8>  mUnk71077b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DebugEndPoint& operator=(DebugEndPoint const&);
    DebugEndPoint(DebugEndPoint const&);
#endif // @header-generator platform
    DebugEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void log(::LogArea const, ::LogLevel const, char const*);
#else // @header-generator platform
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool logOnlyOnce() const;
#else // @header-generator platform
    virtual void flush() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flush();
#else // @header-generator platform
    virtual void setEnabled(bool newState) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEnabled(bool);
#else // @header-generator platform
    virtual bool isEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEnabled() const;
#else // @header-generator platform
    virtual bool logOnlyOnce() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void contentAssert(::LogArea const, ::LogLevel const, char const*);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void contentAssert(::LogArea const area, ::LogLevel const level, char const* message);
#else // LL_PLAT_C
    virtual void contentAssert(::LogArea const, ::LogLevel const, char const*);
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeContentLogging(::ResourcePackManager&, ::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI explicit DebugEndPoint(::std::optional<::LogLevel> minLogLevel);
#endif

    MCNAPI void initializeContentLogging(::ResourcePackManager& mgr, ::Core::Path const& levelPath);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<LogArea, bool> const& mAssertAreas();
#else // @header-generator platform
    MCNAPI static ::std::unordered_map<::LogArea, bool> const& mAssertAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::std::optional<::LogLevel> minLogLevel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool newState);

    MCNAPI bool $isEnabled() const;

    MCNAPI bool $logOnlyOnce() const;

    MCNAPI void $contentAssert(::LogArea const area, ::LogLevel const level, char const* message);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
