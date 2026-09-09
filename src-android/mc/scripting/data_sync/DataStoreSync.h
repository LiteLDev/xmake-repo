#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/scripting/data_sync/DataStoreChange.h"
#include "mc/scripting/data_sync/DataStoreRemoval.h"
#include "mc/scripting/data_sync/DataStoreUpdate.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI::PathUtility { struct PathQueryError; }
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSync {
public:
    // DataStoreSync inner types define
    using PropertyChangePublisher = ::Bedrock::PubSub::Publisher<
        void(const cereal::DynamicValue*),
        Bedrock::PubSub::ThreadModel::SingleThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, cereal::DynamicValue>>> mDataStores;
    ::ll::UntypedStorage<8, 40> mPropertyPathPublishers;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, uint>>> mPropertyUpdateCount;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, std::unordered_map<std::string, uint>>>> mPathUpdateCount;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<Bedrock::DDUI::DataStoreUpdate, Bedrock::DDUI::DataStoreChange, Bedrock::DDUI::DataStoreRemoval>>> mOutgoingChanges;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSync();

    virtual void clear(std::string const&, bool);

    virtual void assertAppropriateThread() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::DynamicValue const* get(std::string const&, std::string const&) const;

    MCNAPI ::nonstd::expected<gsl::not_null<const cereal::DynamicValue*>, Bedrock::DDUI::PathUtility::PathQueryError>
    getPath(std::string const&, std::string const&, std::string const&) const;

    MCNAPI ::Bedrock::PubSub::Subscription listen(
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void(const cereal::DynamicValue*)>
    );

    MCNAPI void set(std::string const&, std::string const&, ::cereal::DynamicValue const&, bool);

    MCNAPI ::nonstd::expected<void, Bedrock::DDUI::PathUtility::PathQueryError> setPath(
        std::string const&,
        std::string const&,
        std::string const&,
        std::variant<double, bool, std::string> const&,
        bool,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear(std::string const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
