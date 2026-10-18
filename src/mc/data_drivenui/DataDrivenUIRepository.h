#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/puv/Logger.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/UIComposition.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/UIRoot.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/ResourcePackListener.h"
#include "mc/resources/interface/IDataDrivenUIRepository.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourceLoadManager;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename T0> class DDUIContainer;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Puv { class Logger; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace Puv { template<typename T0> class LoggerIterator; }
#else // @header-generator platform
#endif // @header-generator platform
namespace PuvLoadData { struct TelemetryEventData; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerFixedGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ExtensionPoint; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDivider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDropdown; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormImage; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormScrollView; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSlider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSwitch; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelDecoration; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelSpacing; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelText; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ScrollableGridLayout; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::v1_21_130::DataDrivenUI { struct UIComposition; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct UIRoot; }
#endif // @header-generator platform
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Visibility; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
// clang-format on

class DataDrivenUIRepository : public ::IDataDrivenUIRepository, public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                      mResourceLoadManager;
    ::ll::UntypedStorage<8, 24>                                      mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                  mEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::ReflectionCtx>> mReflectionCtx;
    ::ll::UntypedStorage<8, 240>                                     mUICompositionInternalLoader;
    ::ll::UntypedStorage<8, 240>                                     mUICompositionExternalLoader;
    ::ll::UntypedStorage<8, 240>                                     mUIRootInternalLoader;
    ::ll::UntypedStorage<8, 240>                                     mUIRootExternalLoader;
    ::ll::UntypedStorage<8, 24>                                      mUICompositionData;
    ::ll::UntypedStorage<8, 24>                                      mUIRootData;
    ::ll::UntypedStorage<8, 96>                                      mOnCompositionsReloadedAsyncPublisher;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnkf7c36c;
    ::ll::UntypedStorage<8, 24>  mUnka0c594;
    ::ll::UntypedStorage<8, 8>   mUnk93c79f;
    ::ll::UntypedStorage<8, 8>   mUnk45cd72;
    ::ll::UntypedStorage<8, 256> mUnkd8a435;
    ::ll::UntypedStorage<8, 256> mUnkcca1b1;
    ::ll::UntypedStorage<8, 256> mUnk323176;
    ::ll::UntypedStorage<8, 256> mUnk71ff3b;
    ::ll::UntypedStorage<8, 24>  mUnk1ec5f7;
    ::ll::UntypedStorage<8, 24>  mUnk64ee12;
    ::ll::UntypedStorage<8, 128> mUnkb4c13b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIRepository& operator=(DataDrivenUIRepository const&);
    DataDrivenUIRepository(DataDrivenUIRepository const&);
    DataDrivenUIRepository();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DataDrivenUIRepository();
#else // @header-generator platform
    virtual ~DataDrivenUIRepository() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ResourcePackManager const&);
#else // @header-generator platform
    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::variant<std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDivider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormImage>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSlider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContextList>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelText>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> const& getComposition(std::string const&) const;
#else // @header-generator platform
    virtual void onJsonResourcesChanged(::ResourcePackManager& resourcePackManager) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::UUID const& getCompositionPackId(std::string const&) const;
#else // @header-generator platform
    virtual void load(::ResourcePackManager const& resourcePackManager) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::variant<std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Context>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const& getRoot(std::string const&) const;
#else // @header-generator platform
    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> const&
    getComposition(::std::string const& identifier) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::UUID const& getRootPackId(std::string const&) const;
#else // @header-generator platform
    virtual ::mce::UUID const& getCompositionPackId(::std::string const& identifier) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::variant<std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDivider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormImage>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSlider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContextList>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelText>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> getExtensionPointContents(std::string const&) const;
#else // @header-generator platform
    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getRoot(::std::string const& identifier) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription subscribeToOnCompositionsReloadedAsync(std::function<void ()>&&);
#else // @header-generator platform
    virtual ::mce::UUID const& getRootPackId(::std::string const& identifier) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);
#else // @header-generator platform
    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>>
    getExtensionPointContents(::std::string const& name) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onJsonResourcesChanged(::ResourcePackManager&);
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    subscribeToOnCompositionsReloadedAsync(::std::function<void()>&& onCompositionsReloadedAsyncCallback) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DataDrivenUIRepository(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::ResourcePackManager&,
        ::IMinecraftEventing&
    );

    MCNAPI void _initializeLoaders(
        ::Puv::SlicedLoader<
            SharedTypes::v1_21_130::DataDrivenUI::UIRoot,
            std::nullptr_t,
            std::nullptr_t,
            SharedTypes::v1_21_130::DataDrivenUI::UIRoot>&,
        ::Puv::SlicedLoader<
            SharedTypes::v1_21_130::DataDrivenUI::UIComposition,
            std::nullptr_t,
            std::nullptr_t,
            SharedTypes::v1_21_130::DataDrivenUI::UIComposition>&,
        bool const
    );

    MCNAPI bool _parseAndLoadUICompositionData(
        char const*,
        std::string const&,
        bool const,
        ::PuvLoadData::TelemetryEventData&,
        ::mce::UUID const
    );

    MCNAPI bool _parseAndLoadUIRootData(
        char const*,
        std::string const&,
        bool const,
        ::PuvLoadData::TelemetryEventData&,
        ::mce::UUID const
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI DataDrivenUIRepository(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::ResourcePackManager&                               resourcePackManager,
        ::IMinecraftEventing&                                eventing
    );

    MCNAPI void _initializeLoaders(
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot>& rootLoader,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition>& compositionLoader,
        bool const                                                  isBuiltinPack
    );

    MCNAPI bool _parseAndLoadUICompositionData(
        char const*                        filenameStr,
        ::std::string const&               fileData,
        bool const                         isBuiltinPack,
        ::PuvLoadData::TelemetryEventData& eventData,
        ::mce::UUID const                  packId
    );

    MCNAPI bool _parseAndLoadUIRootData(
        char const*                        filenameStr,
        ::std::string const&               fileData,
        bool const                         isBuiltinPack,
        ::PuvLoadData::TelemetryEventData& eventData,
        ::mce::UUID const                  packId
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::ResourcePackManager&,
        ::IMinecraftEventing&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::ResourcePackManager&                               resourcePackManager,
        ::IMinecraftEventing&                                eventing
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ResourcePackManager const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);

    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);

    MCNAPI void $load(::ResourcePackManager const& resourcePackManager);

    MCNAPI ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> const&
    $getComposition(::std::string const& identifier) const;

    MCNAPI ::mce::UUID const& $getCompositionPackId(::std::string const& identifier) const;

    MCNAPI ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    $getRoot(::std::string const& identifier) const;

    MCNAPI ::mce::UUID const& $getRootPackId(::std::string const& identifier) const;

    MCNAPI ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>>
    $getExtensionPointContents(::std::string const& name) const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $subscribeToOnCompositionsReloadedAsync(::std::function<void()>&& onCompositionsReloadedAsyncCallback);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::variant<
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> const&
           $getComposition(std::string const&) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::UUID const& $getCompositionPackId(std::string const&) const;

    MCNAPI std::vector<std::variant<
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Context>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
           $getRoot(std::string const&) const;

    MCNAPI ::mce::UUID const& $getRootPackId(std::string const&) const;

    MCNAPI std::vector<std::variant<
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Visibility>>>
           $getExtensionPointContents(std::string const&) const;

    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToOnCompositionsReloadedAsync(std::function<void()>&&);

    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);

    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
