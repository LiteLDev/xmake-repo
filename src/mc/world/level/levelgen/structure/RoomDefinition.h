#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class RoomDefinition : public ::std::enable_shared_from_this<RoomDefinition> {
#else // @header-generator platform
class RoomDefinition : public ::std::enable_shared_from_this<::RoomDefinition> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                           mIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<RoomDefinition>>> mConnections;
    ::ll::TypedStorage<8, 24, std::vector<bool>>                            mHasOpening;
    ::ll::TypedStorage<1, 1, bool>                                          mClaimed;
    ::ll::TypedStorage<1, 1, bool>                                          mIsSource;
    ::ll::TypedStorage<4, 4, int>                                           mScanIndex;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                 mIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::RoomDefinition>>> mConnections;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>                                mHasOpening;
    ::ll::TypedStorage<1, 1, bool>                                                mClaimed;
    ::ll::TypedStorage<1, 1, bool>                                                mIsSource;
    ::ll::TypedStorage<4, 4, int>                                                 mScanIndex;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RoomDefinition(::RoomDefinition const&);
#else // @header-generator platform
    MCAPI bool findSource(int scanIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool findSource(int);

    MCNAPI void setConnection(uchar const&, std::shared_ptr<RoomDefinition>);

    MCNAPI ~RoomDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RoomDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void setConnection(uchar const& direction, ::std::shared_ptr<::RoomDefinition> definition);
#endif // @header-generator platform
    // NOLINTEND
};
