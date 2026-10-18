#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/scripting/data_sync/DDUI.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/data_sync/DataStoreChange.h"
#include "mc/scripting/data_sync/DataStoreRemoval.h"
#include "mc/scripting/data_sync/DataStoreUpdate.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI::PathUtility { struct PathQueryError; }
namespace Bedrock::PubSub { class Subscription; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace cereal { class DynamicValue; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSync {
public:
    // DataStoreSync inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using PropertyChangePublisher = ::Bedrock::PubSub::Publisher<
        void(const cereal::DynamicValue*),
        Bedrock::PubSub::ThreadModel::SingleThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;
#else // @header-generator platform
    using PropertyChangePublisher = ::Bedrock::PubSub::
        Publisher<void(::cereal::DynamicValue const*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, cereal::DynamicValue>>> mDataStores;
    ::ll::UntypedStorage<8, 40> mPropertyPathPublishers;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, uint>>> mPropertyUpdateCount;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, std::unordered_map<std::string, uint>>>> mPathUpdateCount;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<Bedrock::DDUI::DataStoreUpdate, Bedrock::DDUI::DataStoreChange, Bedrock::DDUI::DataStoreRemoval>>> mOutgoingChanges;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::unordered_map<::std::string, ::cereal::DynamicValue>>>
        mDataStores;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::unordered_map<
                ::std::string,
                ::std::unordered_map<
                    ::std::string,
                    ::Bedrock::PubSub::Publisher<
                        void(::cereal::DynamicValue const*),
                        ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                        0>,
                    ::std::hash<::std::string>,
                    ::std::equal_to<::std::string>>>>>
        mPropertyPathPublishers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unordered_map<::std::string, uint>>>
        mPropertyUpdateCount;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::unordered_map<
                ::std::string,
                ::std::unordered_map<::std::string, uint, ::std::hash<::std::string>, ::std::equal_to<::std::string>>>>>
        mPathUpdateCount;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::Bedrock::DDUI::DataStoreUpdate,
            ::Bedrock::DDUI::DataStoreChange,
            ::Bedrock::DDUI::DataStoreRemoval>>>
        mOutgoingChanges;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    [[nodiscard]] cereal::DynamicValue const* get(std::string const& datastoreName, std::string const& property) const {
        return getNestedMapValueConst(mDataStores.get(), datastoreName, property);
    }
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DataStoreSync();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~DataStoreSync() = default;
#else // LL_PLAT_C
    virtual ~DataStoreSync();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clear(std::string const&, bool);
#else // @header-generator platform
    virtual void clear(::std::string const& datastoreName, bool addToOutgoingChanges);
#endif // @header-generator platform

    virtual void assertAppropriateThread() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::DynamicValue const* get(std::string const&, std::string const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI DataStoreSync();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::nonstd::expected<gsl::not_null<const cereal::DynamicValue*>, Bedrock::DDUI::PathUtility::PathQueryError>
    getPath(std::string const&, std::string const&, std::string const&) const;
#else // @header-generator platform
    MCAPI ::nonstd::
        expected<::gsl::not_null<::cereal::DynamicValue const*>, ::Bedrock::DDUI::PathUtility::PathQueryError>
        getPath(::std::string const& dataStoreName, ::std::string const& property, ::std::string const& path) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription listen(
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void(const cereal::DynamicValue*)>
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Subscription listen(
        ::std::string const&                                 datastoreName,
        ::std::string const&                                 property,
        ::std::string const&                                 path,
        ::std::function<void(::cereal::DynamicValue const*)> onChange
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void set(std::string const&, std::string const&, ::cereal::DynamicValue const&, bool);
#else // @header-generator platform
    MCAPI void
    set(::std::string const&          datastoreName,
        ::std::string const&          property,
        ::cereal::DynamicValue const& obj,
        bool                          addToOutgoingChanges);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::nonstd::expected<void, Bedrock::DDUI::PathUtility::PathQueryError> setPath(
        std::string const&,
        std::string const&,
        std::string const&,
        std::variant<double, bool, std::string> const&,
        bool,
        bool
#else // @header-generator platform
    MCAPI ::nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setPath(
        ::std::string const&                               dataStoreName,
        ::std::string const&                               propertyName,
        ::std::string const&                               path,
        ::std::variant<double, bool, ::std::string> const& data,
        bool                                               addToOutgoing,
        bool                                               allowStringToObjectUpdates
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clear(std::string const&, bool);
#else // @header-generator platform
    MCAPI void $clear(::std::string const& datastoreName, bool addToOutgoingChanges);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
