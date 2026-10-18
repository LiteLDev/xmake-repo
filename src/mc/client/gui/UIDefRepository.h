#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/interface/IUIDefRepository.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class PackReport;
class ResourceLoadManager;
class ResourceLocation;
class ResourcePackStack;
namespace Json { class Value; }
// clang-format on

class UIDefRepository : public ::IUIDefRepository {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/interface/IUIDefRepository.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class PackReport;
class ResourceLoadManager;
class ResourceLocation;
class ResourcePackStack;
// clang-format on

class UIDefRepository : public ::IUIDefRepository {
#else // @header-generator platform
class UIDefRepository {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // UIDefRepository inner types declare
    // clang-format off
    class UIDefNamespace;
    struct DefEntry;
    // clang-format on

    // UIDefRepository inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class UIDefNamespace {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::UntypedStorage<8, 40>            mDefs;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class UIDefNamespace {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                      mName;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Json::Value>> mDefs;
        // NOLINTEND
    };
#else // @header-generator platform
    class UIDefNamespace {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        UIDefNamespace& operator=(UIDefNamespace const&);
        UIDefNamespace(UIDefNamespace const&);
        UIDefNamespace();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UIDefNamespace();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DefEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>          collectionIndex;
        ::ll::TypedStorage<8, 24, std::string> ns;
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 24, std::string> refNs;
        ::ll::TypedStorage<8, 24, std::string> refName;
        ::ll::UntypedStorage<8, 16>            jsonVal;
        // NOLINTEND

    public:
        // prevent constructor by default
        DefEntry& operator=(DefEntry const&);
        DefEntry(DefEntry const&);
        DefEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DefEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using UIDefNamespaceMap = std::unordered_map<std::string, UIDefRepository::UIDefNamespace>;

    using DefEntriesPtr = std::shared_ptr<std::vector<UIDefRepository::DefEntry>>;

    using ReportsPtr = std::shared_ptr<std::vector<PackReport>>;

    using VisitNodeFunc =
        std::function<Json::Value&(const std::string&, const std::string&, const std::string&, Json::Value&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                                 mResourceLoadManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, UIDefRepository::UIDefNamespace>> mDefNamespaces;
    ::ll::UntypedStorage<8, 16>                                                                 mGlobalVariables;
    ::ll::UntypedStorage<1, 144>                                                                mMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    UIDefRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UIDefRepository();

    virtual void loadDefsList(::ResourceLocation const&, ::ResourcePackStack const&, std::function<void (std::vector<PackReport>&)>);

    virtual void validateDefEntries(::ResourceLocation const&, std::shared_ptr<const ResourcePackStack>, std::function<void (std::vector<PackReport>&)>) const;

    virtual ::Json::Value const& findDef(std::string const&, std::string const&) const;

    virtual ::Bedrock::Threading::SharedLock<std::shared_timed_mutex> acquireSharedLock() const;

    virtual void syncUILoad();

    virtual void syncUILoadDefinitions();

    virtual void syncUILoadDefinitionReferences();

    virtual void cancelUIValidation();

    virtual bool isLoadingDone() const;

    virtual bool isUILoadingDone() const;

    virtual bool isUIValidationDone() const;

    virtual void forEachControl(std::function<void (const Json::Value&, const std::string&)>);

    virtual ::Json::Value const& getGlobalVariables() const;

    virtual void translateLegacyItemIdsInRepository(::ItemRegistryRef const);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UIDefRepository(::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>);

    MCNAPI void _collectAllDefEntries(
        ::ResourceLoadType,
        ::ResourceLocation const&,
        ::ResourcePackStack const&,
        std::shared_ptr<std::vector<UIDefRepository::DefEntry>>,
        std::shared_ptr<std::vector<PackReport>>
    ) const;

    MCNAPI void _forEachControl(
        ::Json::Value const&,
        std::string const&,
        std::function<void(const Json::Value&, const std::string&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $loadDefsList(::ResourceLocation const&, ::ResourcePackStack const&, std::function<void(std::vector<PackReport>&)>);

    MCNAPI void $validateDefEntries(
        ::ResourceLocation const&,
        std::shared_ptr<const ResourcePackStack>,
        std::function<void(std::vector<PackReport>&)>
    ) const;

    MCNAPI ::Json::Value const& $findDef(std::string const&, std::string const&) const;

    MCNAPI ::Bedrock::Threading::SharedLock<std::shared_timed_mutex> $acquireSharedLock() const;

    MCNAPI void $syncUILoad();

    MCNAPI void $syncUILoadDefinitions();

    MCNAPI void $syncUILoadDefinitionReferences();

    MCNAPI void $cancelUIValidation();

    MCNAPI bool $isLoadingDone() const;

    MCNAPI bool $isUILoadingDone() const;

    MCNAPI bool $isUIValidationDone() const;

    MCNAPI void $forEachControl(std::function<void(const Json::Value&, const std::string&)>);

    MCNAPI ::Json::Value const& $getGlobalVariables() const;

    MCNAPI void $translateLegacyItemIdsInRepository(::ItemRegistryRef const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DefEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            collectionIndex;
        ::ll::TypedStorage<8, 32, ::std::string> ns;
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 32, ::std::string> refNs;
        ::ll::TypedStorage<8, 32, ::std::string> refName;
        ::ll::TypedStorage<8, 16, ::Json::Value> jsonVal;
        // NOLINTEND
    };

    using VisitNodeFunc = ::std::function<
        ::Json::Value&(::std::string const&, ::std::string const&, ::std::string const&, ::Json::Value&)>;

    using DefEntriesPtr = ::std::shared_ptr<::std::vector<::UIDefRepository::DefEntry>>;

    using ReportsPtr = ::std::shared_ptr<::std::vector<::PackReport>>;

    using UIDefNamespaceMap = ::std::unordered_map<::std::string, ::UIDefRepository::UIDefNamespace>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>> mResourceLoadManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::UIDefRepository::UIDefNamespace>> mDefNamespaces;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                                          mGlobalVariables;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                                     mMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    UIDefRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void loadDefsList(
        ::ResourceLocation const&                           defsListFile,
        ::ResourcePackStack const&                          packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    ) /*override*/;

    virtual void validateDefEntries(
        ::ResourceLocation const&                           defsListFile,
        ::std::shared_ptr<::ResourcePackStack const>        packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    ) const /*override*/;

    virtual ::Json::Value const& findDef(::std::string const& defNamespace, ::std::string const& defName) const
        /*override*/;

    virtual ::Bedrock::Threading::SharedLock<::std::shared_mutex> acquireSharedLock() const /*override*/;

    virtual void syncUILoad() /*override*/;

    virtual void syncUILoadDefinitions() /*override*/;

    virtual void syncUILoadDefinitionReferences() /*override*/;

    virtual void cancelUIValidation() /*override*/;

    virtual bool isLoadingDone() const /*override*/;

    virtual bool isUILoadingDone() const /*override*/;

    virtual bool isUIValidationDone() const /*override*/;

    virtual void
    forEachControl(::std::function<void(::Json::Value const&, ::std::string const&)> callback) /*override*/;

    virtual ::Json::Value const& getGlobalVariables() const /*override*/;

    virtual void translateLegacyItemIdsInRepository(::ItemRegistryRef const itemRegistry) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UIDefRepository(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager);

    MCAPI void _applyGlobalColorFormat();

    MCAPI void _collectAllDefEntries(
        ::ResourceLoadType                                            loadType,
        ::ResourceLocation const&                                     defsListFile,
        ::ResourcePackStack const&                                    packStack,
        ::std::shared_ptr<::std::vector<::UIDefRepository::DefEntry>> allDefEntries,
        ::std::shared_ptr<::std::vector<::PackReport>>                packReports
    ) const;

    MCAPI void _forEachControl(
        ::Json::Value const&                                              value,
        ::std::string const&                                              namePath,
        ::std::function<void(::Json::Value const&, ::std::string const&)> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadDefsList(
        ::ResourceLocation const&                           defsListFile,
        ::ResourcePackStack const&                          packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    );

    MCAPI void $validateDefEntries(
        ::ResourceLocation const&                           defsListFile,
        ::std::shared_ptr<::ResourcePackStack const>        packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    ) const;

    MCAPI ::Json::Value const& $findDef(::std::string const& defNamespace, ::std::string const& defName) const;

    MCAPI ::Bedrock::Threading::SharedLock<::std::shared_mutex> $acquireSharedLock() const;

    MCAPI void $syncUILoad();

    MCAPI void $syncUILoadDefinitions();

    MCAPI void $syncUILoadDefinitionReferences();

    MCAPI void $cancelUIValidation();

    MCAPI bool $isLoadingDone() const;

    MCAPI bool $isUILoadingDone() const;

    MCAPI bool $isUIValidationDone() const;

    MCAPI void $forEachControl(::std::function<void(::Json::Value const&, ::std::string const&)> callback);

    MCFOLD ::Json::Value const& $getGlobalVariables() const;

    MCAPI void $translateLegacyItemIdsInRepository(::ItemRegistryRef const itemRegistry);
    // NOLINTEND
#else // @header-generator platform
    struct DefEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
};
