#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldTransferAgent;
struct ExternalWorldTransferActionFunc;
struct LocalWorldTransferActionFunc;
struct RealmTransferActionFunc;
// clang-format on

struct IWorldTransfer {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldTransfer() = default;

    virtual void setWorldTransferAction(std::variant<LocalWorldTransferActionFunc, ExternalWorldTransferActionFunc, RealmTransferActionFunc, std::monostate>&&) = 0;

    virtual std::variant<LocalWorldTransferActionFunc, ExternalWorldTransferActionFunc, RealmTransferActionFunc, std::monostate> const& getWorldTransferAction() const = 0;

    virtual ::Bedrock::NonOwnerPointer<WorldTransferAgent> const getWorldTransferAgent() const = 0;

    virtual void setIsWorldTransferInProgress(bool) = 0;

    virtual bool isWorldTransferInProgress() const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldTransferAgent;
struct ExternalWorldTransferActionFunc;
struct LocalWorldTransferActionFunc;
struct RealmTransferActionFunc;
// clang-format on

struct IWorldTransfer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldTransfer() = default;

    virtual void setWorldTransferAction(
        ::std::variant<
            ::LocalWorldTransferActionFunc,
            ::ExternalWorldTransferActionFunc,
            ::RealmTransferActionFunc,
            ::std::monostate>&& worldTransferAction
    ) = 0;

    virtual ::std::variant<
        ::LocalWorldTransferActionFunc,
        ::ExternalWorldTransferActionFunc,
        ::RealmTransferActionFunc,
        ::std::monostate> const&
    getWorldTransferAction() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const = 0;

    virtual void setIsWorldTransferInProgress(bool isWorldTransferInProgress) = 0;

    virtual bool isWorldTransferInProgress() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct IWorldTransfer {};
#endif // @header-generator platform
#endif // @header-generator platform
