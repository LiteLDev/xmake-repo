#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
class LevelListCacheObserver : public ::Core::Observer<LevelListCacheObserver, Core::SingleThreadedLock> {
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

class LevelListCacheObserver : public ::Core::Observer<::LevelListCacheObserver, ::Core::SingleThreadedLock> {
#endif // @header-generator platform
public:
    // LevelListCacheObserver inner types define
    enum class LevelAddedType : int {
        NewWorld      = 0,
        ExistingWorld = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);
#else // @header-generator platform
    virtual void onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLevelUpdated(std::string const&);
#else // @header-generator platform
    virtual void onLevelUpdated(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLevelDeleted(std::string const&);
#else // @header-generator platform
    virtual void onLevelDeleted(::std::string const& levelId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSummaryUpdated(std::string const&);
#else // @header-generator platform
    virtual void onSummaryUpdated(::std::string const& levelId);
#endif // @header-generator platform

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

    MCNAPI void $onLevelUpdated(::std::string const& levelId);

    MCNAPI void $onLevelDeleted(::std::string const& levelId);

    MCNAPI void $onSummaryUpdated(::std::string const& levelId);

    MCNAPI void $onStorageChanged();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelUpdated(std::string const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelDeleted(std::string const&);

    MCNAPI void $onSummaryUpdated(std::string const&);

    MCNAPI void $onStorageChanged();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
