#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScopedActiveTracker.h"
#include "mc/client/gui/oreui/interface/ScopedFPSDataTracker.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScopedActiveTracker.h"
#include "mc/client/gui/oreui/interface/ScopedFPSDataTracker.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct DataTracker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mPreviousScreenName;
    ::ll::TypedStorage<8, 24, std::string> mScreenName;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mContentfulPaint;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mMeaningfulPaintWithRendering;
    ::ll::TypedStorage<8, 40, std::optional<OreUI::ScopedFPSDataTracker>> mLoading;
    ::ll::TypedStorage<8, 40, std::optional<OreUI::ScopedFPSDataTracker>> mAverage;
    ::ll::TypedStorage<8, 40, std::optional<OreUI::ScopedFPSDataTracker>> mIdle;
    ::ll::TypedStorage<8, 40, std::optional<OreUI::ScopedFPSDataTracker>> mInteraction;
    ::ll::TypedStorage<8, 64, std::optional<OreUI::ScopedActiveTracker>> mDataChanged;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DataTracker& operator=(DataTracker const&);
    DataTracker(DataTracker const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                  mPreviousScreenName;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mScreenName;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>>    mContentfulPaint;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>>    mMeaningfulPaintWithRendering;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mLoading;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mAverage;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mIdle;
    ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::ScopedFPSDataTracker>> mInteraction;
    ::ll::TypedStorage<8, 64, ::std::optional<::OreUI::ScopedActiveTracker>>  mDataChanged;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DataTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DataTracker {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
