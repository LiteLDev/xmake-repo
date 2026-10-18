#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/PriorityPresetExclusionData.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
namespace CameraAimAssist { struct PriorityPresetExclusionData; }
// clang-format on
#endif // @header-generator platform

namespace CameraAimAssist {

class PriorityPreset {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // PriorityPreset inner types define
    using ItemCategoryIdTable = std::unordered_map<HashedString, HashedString>;

    using PriorityCategoryName = ::HashedString;

    using ItemName = ::HashedString;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                                  mId;
    ::ll::TypedStorage<8, 160, ::CameraAimAssist::PriorityPresetExclusionData> mExclusionList;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>>                mLiquidTargetingItemsList;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>>  mItemCategoryIdTable;
    ::ll::TypedStorage<8, 40, ::HashedString>                                  mHandCategory;
    ::ll::TypedStorage<8, 40, ::HashedString>                                  mDefaultCategory;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48>  mUnk6002d4;
    ::ll::UntypedStorage<8, 256> mUnk16bd26;
    ::ll::UntypedStorage<8, 64>  mUnk8e40ff;
    ::ll::UntypedStorage<8, 64>  mUnk115493;
    ::ll::UntypedStorage<8, 48>  mUnkaf34d6;
    ::ll::UntypedStorage<8, 48>  mUnk5b8aee;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityPreset& operator=(PriorityPreset const&);
    PriorityPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PriorityPreset(::CameraAimAssist::PriorityPreset const&);

    MCNAPI PriorityPreset(
        ::HashedString const&                                       id,
        ::CameraAimAssist::PriorityPresetExclusionData const&       exclusionList,
        ::std::unordered_set<::HashedString> const&                 liquidTargetingItemsList,
        ::std::unordered_map<::HashedString, ::HashedString> const& itemCategoryIdTable,
        ::HashedString const&                                       handCategory,
        ::HashedString const&                                       defaultCategory
    );

    MCNAPI ::HashedString const& getPriorityCategoryNameOfItem(::HashedString const& itemName) const;

#ifdef LL_PLAT_C
    MCNAPI ::CameraAimAssist::PriorityPreset& operator=(::CameraAimAssist::PriorityPreset&&);
#endif

    MCNAPI ~PriorityPreset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CameraAimAssist::PriorityPreset const& EMPTY_PRESET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraAimAssist::PriorityPreset const&);

    MCNAPI void* $ctor(
        ::HashedString const&                                       id,
        ::CameraAimAssist::PriorityPresetExclusionData const&       exclusionList,
        ::std::unordered_set<::HashedString> const&                 liquidTargetingItemsList,
        ::std::unordered_map<::HashedString, ::HashedString> const& itemCategoryIdTable,
        ::HashedString const&                                       handCategory,
        ::HashedString const&                                       defaultCategory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraAimAssist
