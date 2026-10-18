#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/SparseContainer.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Container;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
namespace Bedrock::Safety { class RedactableString; }
#else // @header-generator platform
struct ItemStackRequestIdTag;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SparseContainerClient();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SparseContainerClient();
#else // @header-generator platform
    virtual ~SparseContainerClient() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SparseContainerClient(
        ::Container&,
        ::SparseContainerBackingSetType,
        bool,
        std::unique_ptr<ISparseContainerSetListener>,
        std::unique_ptr<IPlayerContainerSetter>
    );
#else // @header-generator platform
    MCNAPI void _networkUpdateItem(int slot, ::ItemStack const& newItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ItemStack const&
    _setCreatedItem(::ItemStackRequestId const& currentRequestId, int slot, ::ItemStack const& item);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<SparseContainerClient::PushSlotPredictionResult, std::string> const&
#else // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<::SparseContainerClient::PushSlotPredictionResult, ::std::string> const&
#endif // @header-generator platform
    pushSlotPredictionResultMap();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
