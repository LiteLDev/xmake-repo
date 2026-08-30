#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/services/persona/PieceOfferWrapper.h"

// auto generated forward declare list
// clang-format off
class PersonaScreenModel;
class StoreVisualStyle;
// clang-format on

namespace persona {

class PieceCollector : public ::std::enable_shared_from_this<persona::PieceCollector> {
public:
    // PieceCollector inner types define
    enum class State : uchar {
        None               = 0,
        Downloading        = 1,
        ImportingSucceeded = 2,
        Applying           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<PersonaScreenModel>> mModel;
    ::ll::UntypedStorage<8, 8>                                     mOwner;
    ::ll::TypedStorage<8, 16, ::persona::PieceOfferWrapper>        mPieceCollecting;
    ::ll::TypedStorage<4, 4, int>                                  mOfferIndex;
    ::ll::TypedStorage<8, 8, long>                                 mRequestStartTime;
    ::ll::TypedStorage<8, 8, double>                               mRequestEndTime;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                      mDirtyFlag;
    ::ll::TypedStorage<1, 1, ::persona::PieceCollector::State>     mState;
    // NOLINTEND

public:
    // prevent constructor by default
    PieceCollector& operator=(PieceCollector const&);
    PieceCollector(PieceCollector const&);
    PieceCollector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PieceCollector(std::shared_ptr<PersonaScreenModel>, ::StoreVisualStyle const&);

    MCNAPI void _onOfferCollected(std::weak_ptr<persona::PieceCollector>, bool);

    MCNAPI void _setState(::persona::PieceCollector::State const);

    MCNAPI bool canPieceBeApplied();

    MCNAPI ::ui::ViewRequest collectPiece(::persona::PieceOfferWrapper const&, int const);

    MCNAPI ::persona::PieceOfferWrapper const& getPieceOffer() const;

    MCNAPI void onPieceOfferApplied();

    MCNAPI void tick(::ui::DirtyFlag&);

    MCNAPI void triggerApplyingPieceState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PersonaScreenModel>, ::StoreVisualStyle const&);
    // NOLINTEND
};

} // namespace persona
