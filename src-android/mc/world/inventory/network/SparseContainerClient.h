#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/SparseContainer.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class Container;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStack;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class SparseContainerClient : public ::SparseContainer {
public:
    // SparseContainerClient inner types define
    enum class PushSlotPredictionResult : int {
        Succeeded                  = 0,
        FailedWithFuturePrediction = 1,
        FailedWithError            = 2,
    };

public:
    // prevent constructor by default
    SparseContainerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SparseContainerClient();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SparseContainerClient(
        ::Container&,
        ::SparseContainerBackingSetType,
        bool,
        std::unique_ptr<ISparseContainerSetListener>,
        std::unique_ptr<IPlayerContainerSetter>
    );

    MCNAPI void _networkUpdateItem(int, ::ItemStack const&);

    MCNAPI void _pushHistoricPredictionItem(
        int,
        int,
        ::TypedServerNetId<ItemStackNetIdTag, int, 0> const&,
        ::Bedrock::Safety::RedactableString const&,
        short,
        ::ItemStack&&
    );

    MCNAPI ::ItemStack const&
    _setCreatedItem(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&, int, ::ItemStack const&);

    MCNAPI void clearAllPredictions(::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&, bool, ::Player&);

    MCNAPI ::SparseContainerClient::PushSlotPredictionResult tryPushSlotPrediction(
        ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const&,
        int,
        int,
        int,
        ::TypedServerNetId<ItemStackNetIdTag, int, 0> const&,
        ::Bedrock::Safety::RedactableString const&,
        ::ItemStack*,
        short
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const getPushSlotPredictionResultName(::SparseContainerClient::PushSlotPredictionResult);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<SparseContainerClient::PushSlotPredictionResult, std::string> const&
    pushSlotPredictionResultMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Container&,
        ::SparseContainerBackingSetType,
        bool,
        std::unique_ptr<ISparseContainerSetListener>,
        std::unique_ptr<IPlayerContainerSetter>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
