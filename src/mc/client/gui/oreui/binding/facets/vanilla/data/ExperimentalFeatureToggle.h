#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"
#include "mc/world/level/storage/ExperimentCategory.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"
#include "mc/world/level/storage/ExperimentCategory.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ExperimentalFeatureToggle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AllExperiments>    mExperiment;
    ::ll::TypedStorage<8, 24, std::string const>  mId;
    ::ll::TypedStorage<8, 24, std::string const>  mTitle;
    ::ll::TypedStorage<8, 24, std::string const>  mDescription;
    ::ll::TypedStorage<4, 4, int const>           mCategory;
    ::ll::TypedStorage<1, 1, bool>                mIsDirty;
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper*> mLevelData;
    ::ll::TypedStorage<1, 1, bool>                mInitialized;
    ::ll::TypedStorage<1, 1, bool>                mIsToggleDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentalFeatureToggle& operator=(ExperimentalFeatureToggle const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperimentalFeatureToggle(::OreUI::ExperimentalFeatureToggle const&);

    MCNAPI ExperimentalFeatureToggle(
        ::LevelDataWrapper&,
        std::string const&,
        ::AllExperiments const,
        std::string const&,
        std::string const&,
        ::ExperimentCategory const
    );

    MCNAPI bool getIsEnabled() const;

    MCNAPI bool getIsTogglePermanentlyDisabled();

    MCNAPI void setIsEnabled(bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ExperimentalFeatureToggle const&);

    MCNAPI void* $ctor(
        ::LevelDataWrapper&,
        std::string const&,
        ::AllExperiments const,
        std::string const&,
        std::string const&,
        ::ExperimentCategory const
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ExperimentalFeatureToggle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AllExperiments>     mExperiment;
    ::ll::TypedStorage<8, 32, ::std::string const> mId;
    ::ll::TypedStorage<8, 32, ::std::string const> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string const> mDescription;
    ::ll::TypedStorage<4, 4, int const>            mCategory;
    ::ll::TypedStorage<1, 1, bool>                 mIsDirty;
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper*>  mLevelData;
    ::ll::TypedStorage<1, 1, bool>                 mInitialized;
    ::ll::TypedStorage<1, 1, bool>                 mIsToggleDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentalFeatureToggle& operator=(ExperimentalFeatureToggle const&);
    ExperimentalFeatureToggle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperimentalFeatureToggle(::OreUI::ExperimentalFeatureToggle&&);

    MCAPI ExperimentalFeatureToggle(::OreUI::ExperimentalFeatureToggle const&);

    MCAPI ExperimentalFeatureToggle(
        ::LevelDataWrapper&        levelData,
        ::std::string const&       fourCc,
        ::AllExperiments const     experiment,
        ::std::string const&       title,
        ::std::string const&       description,
        ::ExperimentCategory const category
    );

    MCAPI bool getIsEnabled() const;

    MCAPI bool getIsTogglePermanentlyDisabled();

    MCAPI void setIsEnabled(bool const newValue);

    MCAPI ~ExperimentalFeatureToggle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::OreUI::ExperimentalFeatureToggle&&);

    MCFOLD void* $ctor(::OreUI::ExperimentalFeatureToggle const&);

    MCAPI void* $ctor(
        ::LevelDataWrapper&        levelData,
        ::std::string const&       fourCc,
        ::AllExperiments const     experiment,
        ::std::string const&       title,
        ::std::string const&       description,
        ::ExperimentCategory const category
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ExperimentalFeatureToggle {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
