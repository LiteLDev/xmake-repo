#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ECapabilities.h"
#include "mc/client/gui/oreui/binding/IdType.h"
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class IHandlerFactory; }
namespace OreUI::Detail { class IQuery; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ECapabilities.h"
#include "mc/client/gui/oreui/binding/IdType.h"
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class IHandlerFactory; }
namespace OreUI::Detail { class IQuery; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class QueryRegistry : public ::OreUI::Detail::IBindable {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class QueryRegistry : public ::OreUI::Detail::IBindable {
#else // @header-generator platform
class QueryRegistry {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // QueryRegistry inner types declare
    // clang-format off
    class QueryTemplate;
    class LiveQuery;
    struct DirtyQuery;
    // clang-format on

    // QueryRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class QueryTemplate {
    public:
        // QueryTemplate inner types define
        using FactoryPtr = std::unique_ptr<OreUI::Detail::IHandlerFactory>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::IHandlerFactory>> mHandlerFactory;
        ::ll::TypedStorage<8, 8, void*>                                           mHandle;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueryTemplate();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void bind(std::string const&, ::OreUI::Detail::Binder const&);
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class QueryTemplate {
    public:
        // QueryTemplate inner types define
        using FactoryPtr = ::std::unique_ptr<::OreUI::Detail::IHandlerFactory>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::IHandlerFactory>> mHandlerFactory;
        ::ll::TypedStorage<8, 8, void*>                                               mHandle;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void bind(::std::string const& queryName, ::OreUI::Detail::Binder const& binder);
        // NOLINTEND
    };
#else // @header-generator platform
    class QueryTemplate {};
#endif // @header-generator platform
#endif // @header-generator platform

    class LiveQuery {
    public:
        // LiveQuery inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum class EQueryState : uint {
            Unknown = 0,
            Active  = 1,
            Deleted = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType>                                mId;
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::IQuery>>                 mQuery;
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::QueryRegistry*>                        mRegistry;
        ::ll::TypedStorage<4, 4, int>                                                    mRank;
        ::ll::TypedStorage<1, 1, ::OreUI::ECapabilities>                                 mCapabilities;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mToken;
        ::ll::TypedStorage<4, 4, ::OreUI::Detail::QueryRegistry::LiveQuery::EQueryState> mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        LiveQuery();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI LiveQuery(::OreUI::Detail::QueryRegistry::LiveQuery&&);

        MCNAPI LiveQuery(
            ::OreUI::Detail::Binder const&,
            ::OreUI::Detail::IdType const&,
            ::OreUI::ECapabilities const,
            std::unique_ptr<OreUI::Detail::IQuery>,
            ::OreUI::Detail::QueryRegistry*,
            int const
        );

        MCNAPI ::OreUI::Detail::QueryRegistry::LiveQuery& operator=(::OreUI::Detail::QueryRegistry::LiveQuery&&);

        MCNAPI ~LiveQuery();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::OreUI::Detail::QueryRegistry::LiveQuery&&);

        MCNAPI void* $ctor(
            ::OreUI::Detail::Binder const&,
            ::OreUI::Detail::IdType const&,
            ::OreUI::ECapabilities const,
            std::unique_ptr<OreUI::Detail::IQuery>,
            ::OreUI::Detail::QueryRegistry*,
            int const
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        enum class EQueryState : uint {
            Unknown = 0,
            Active  = 1,
            Deleted = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType>                                mId;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::IQuery>>             mQuery;
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::QueryRegistry*>                        mRegistry;
        ::ll::TypedStorage<4, 4, int>                                                    mRank;
        ::ll::TypedStorage<1, 1, ::OreUI::ECapabilities>                                 mCapabilities;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mToken;
        ::ll::TypedStorage<4, 4, ::OreUI::Detail::QueryRegistry::LiveQuery::EQueryState> mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        LiveQuery& operator=(LiveQuery const&);
        LiveQuery(LiveQuery const&);
        LiveQuery();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI LiveQuery(::OreUI::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI LiveQuery(
            ::OreUI::Detail::Binder const&             binder,
            ::OreUI::Detail::IdType const&             id,
            ::OreUI::ECapabilities                     capabilities,
            ::std::unique_ptr<::OreUI::Detail::IQuery> query,
            ::OreUI::Detail::QueryRegistry*            registry,
            int                                        rank
        );

        MCAPI ::OreUI::Detail::QueryRegistry::LiveQuery& operator=(::OreUI::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI ~LiveQuery();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI void* $ctor(
            ::OreUI::Detail::Binder const&             binder,
            ::OreUI::Detail::IdType const&             id,
            ::OreUI::ECapabilities                     capabilities,
            ::std::unique_ptr<::OreUI::Detail::IQuery> query,
            ::OreUI::Detail::QueryRegistry*            registry,
            int                                        rank
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        enum class EQueryState : uint {};
#endif // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct DirtyQuery {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType> id;
        ::ll::TypedStorage<4, 4, int> rank;
        ::ll::TypedStorage<8, 8, std::reference_wrapper<brstd::flat_map<OreUI::Detail::IdType, OreUI::Detail::QueryRegistry::LiveQuery, std::less<OreUI::Detail::IdType>, std::vector<OreUI::Detail::IdType>, std::vector<OreUI::Detail::QueryRegistry::LiveQuery>>>> container;
        // clang-format on
        // NOLINTEND
    };

    using QueryPtr = std::unique_ptr<OreUI::Detail::IQuery>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::reference_wrapper<OreUI::Detail::Binder>> mBinder;
    ::ll::TypedStorage<8, 8, void*> mDestroyHandle;
    ::ll::TypedStorage<1, 1, bool> mPurgeQueries;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, OreUI::Detail::QueryRegistry::QueryTemplate>> mQueryTemplates;
    ::ll::UntypedStorage<8, 48> mReactiveQueries;
    ::ll::UntypedStorage<8, 48> mDynamicQueries;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Detail::QueryRegistry::DirtyQuery>> mDirtyQueries;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Detail::QueryRegistry::LiveQuery>> mAdditionQueue;
    ::ll::TypedStorage<1, 1, bool> mIterating;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    QueryRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~QueryRegistry();

    virtual void onReadyForBindings();

    virtual void onSuspend();

    virtual void onBindingsReleased();

    virtual void update(double const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _createQuery(
        ::OreUI::Detail::IdType const&,
        ::OreUI::ECapabilities const,
        std::unique_ptr<OreUI::Detail::IQuery>,
        int const
    );

    MCNAPI void _onQueryChanged(::OreUI::Detail::QueryRegistry::LiveQuery const*);

    MCNAPI void _syncQueries();

    MCNAPI std::vector<OreUI::Debug::QueryInformation> getQueryInformation() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onReadyForBindings();

    MCNAPI void $onSuspend();

    MCNAPI void $onBindingsReleased();

    MCNAPI void $update(double const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DirtyQuery {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType> id;
        ::ll::TypedStorage<4, 4, int>                     rank;
        ::ll::TypedStorage<
            8,
            8,
            ::std::reference_wrapper<::brstd::flat_map<
                ::OreUI::Detail::IdType,
                ::OreUI::Detail::QueryRegistry::LiveQuery,
                ::std::less<::OreUI::Detail::IdType>,
                ::std::vector<::OreUI::Detail::IdType>,
                ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>>>
            container;
        // NOLINTEND
    };

    using QueryPtr = ::std::unique_ptr<::OreUI::Detail::IQuery>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Detail::Binder>> mBinder;
    ::ll::TypedStorage<8, 8, void*>                                             mDestroyHandle;
    ::ll::TypedStorage<1, 1, bool>                                              mPurgeQueries;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::OreUI::Detail::QueryRegistry::QueryTemplate>>
        mQueryTemplates;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::OreUI::Detail::IdType,
            ::OreUI::Detail::QueryRegistry::LiveQuery,
            ::std::less<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>>
        mReactiveQueries;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::OreUI::Detail::IdType,
            ::OreUI::Detail::QueryRegistry::LiveQuery,
            ::std::less<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>>
                                                                                         mDynamicQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Detail::QueryRegistry::DirtyQuery>> mDirtyQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>  mAdditionQueue;
    ::ll::TypedStorage<1, 1, bool>                                                       mIterating;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~QueryRegistry() /*override*/;

    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double const time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _createQuery(
        ::OreUI::Detail::IdType const&             id,
        ::OreUI::ECapabilities                     capabilities,
        ::std::unique_ptr<::OreUI::Detail::IQuery> query,
        int                                        rank
    );

    MCAPI void _syncQueries();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCAPI void $onSuspend();

    MCFOLD void $onBindingsReleased();

    MCAPI void $update(double const time);
    // NOLINTEND
#else // @header-generator platform
    struct DirtyQuery {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI::Detail
