#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"

// auto generated forward declare list
// clang-format off
class IContentManagerContext;
struct ContentViews;
// clang-format on

namespace World {

struct WorldPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mGlobalContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentViews>>           mTexturePackViews;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentViews>>           mBehaviorPackViews;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPacks& operator=(WorldPacks const&);
    WorldPacks(WorldPacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldPacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
