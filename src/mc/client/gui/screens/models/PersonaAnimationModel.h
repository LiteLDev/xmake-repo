#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/ReactAnimationType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class IStoreCatalogItem;
class PersonaPiece;
class UIPropertyBag;
namespace persona { class PieceOfferWrapper; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/world/actor/player/persona/ReactAnimationType.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class IStoreCatalogItem;
class UIPropertyBag;
namespace persona { class PieceOfferWrapper; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class PersonaAnimationModel {
public:
    // PersonaAnimationModel inner types declare
    // clang-format off
    struct ReactAnimationTypeHash;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ReactAnimationData;
#endif // @header-generator platform
    // clang-format on

    // PersonaAnimationModel inner types define
    struct ReactAnimationTypeHash {};

#if defined(LL_PLAT_A) // @header-generator platform
    using ReactAnimationType = ::persona::ReactAnimationType;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                             mReactAnimations;
    ::ll::TypedStorage<8, 8, ::IPersonaRepository const&>   mPersonaRepo;
    ::ll::TypedStorage<8, 24, std::string>                  mEmoteAnimationToPlay;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mBoredAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mIdleAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mAnimationReactState;
    ::ll::TypedStorage<4, 4, float>                         mStartingRotation;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>               mDirtyFlag;
    ::ll::TypedStorage<4, 4, float>                         mNextBoredAnimationTime;
    ::ll::TypedStorage<1, 1, bool>                          mAnimationUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationModel& operator=(PersonaAnimationModel const&);
    PersonaAnimationModel(PersonaAnimationModel const&);
    PersonaAnimationModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaAnimationModel(::IPersonaRepository const&);

    MCNAPI void _populateReactAnimations();

    MCNAPI void playEmote(::IStoreCatalogItem const&);

    MCNAPI void playEmote(::persona::PieceOfferWrapper const&);

    MCNAPI void playReactAnimations(::SharedTypes::persona::PieceType, bool);

    MCNAPI void tick(::ui::DirtyFlag&);

    MCNAPI void updateAppearanceData(::persona::PieceOfferWrapper const&, bool);

    MCNAPI void updatePaperDollAnimation(::UIPropertyBag&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IPersonaRepository const&);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ReactAnimationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> animationName;
        ::ll::TypedStorage<8, 32, ::std::string> soundEventName;
        // NOLINTEND
    };

    using ReactAnimationType = ::persona::ReactAnimationType;

    using ReactAnimationData = ::PersonaAnimationModel::ReactAnimationData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::persona::ReactAnimationType,
            ::std::vector<::PersonaAnimationModel::ReactAnimationData>,
            ::PersonaAnimationModel::ReactAnimationTypeHash,
            ::std::equal_to<::persona::ReactAnimationType>>>
                                                            mReactAnimations;
    ::ll::TypedStorage<8, 8, ::IPersonaRepository const&>   mPersonaRepo;
    ::ll::TypedStorage<8, 32, ::std::string>                mEmoteAnimationToPlay;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mBoredAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mIdleAnimationType;
    ::ll::TypedStorage<4, 4, ::persona::ReactAnimationType> mAnimationReactState;
    ::ll::TypedStorage<4, 4, float>                         mStartingRotation;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>               mDirtyFlag;
    ::ll::TypedStorage<4, 4, float>                         mNextBoredAnimationTime;
    ::ll::TypedStorage<1, 1, bool>                          mAnimationUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationModel& operator=(PersonaAnimationModel const&);
    PersonaAnimationModel(PersonaAnimationModel const&);
    PersonaAnimationModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PersonaAnimationModel(::IPersonaRepository const& personaRepo);

    MCAPI void _populateReactAnimations();

    MCAPI void playEmote(::IStoreCatalogItem const& emoteCatalogOffer);

    MCAPI void playEmote(::persona::PieceOfferWrapper const& emoteCatalogOffer);

    MCAPI void playReactAnimations(::SharedTypes::persona::PieceType pieceType, bool offer);

    MCAPI void updateAppearanceData(::persona::PieceOfferWrapper const& offer, bool isOwned);

    MCAPI void updatePaperDollAnimation(::UIPropertyBag& bag);

    MCAPI ~PersonaAnimationModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IPersonaRepository const& personaRepo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct ReactAnimationData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
