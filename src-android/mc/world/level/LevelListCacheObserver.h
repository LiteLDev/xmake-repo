#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

class LevelListCacheObserver : public ::Core::Observer<LevelListCacheObserver, Core::SingleThreadedLock> {
public:
    // LevelListCacheObserver inner types define
    enum class LevelAddedType : int {
        NewWorld      = 0,
        ExistingWorld = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    virtual void onLevelUpdated(std::string const&);

    virtual void onLevelDeleted(std::string const&);

    virtual void onSummaryUpdated(std::string const&);

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    MCNAPI void $onLevelUpdated(std::string const&);

    MCNAPI void $onLevelDeleted(std::string const&);

    MCNAPI void $onSummaryUpdated(std::string const&);

    MCNAPI void $onStorageChanged();
    // NOLINTEND
};
