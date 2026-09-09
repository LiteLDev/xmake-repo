#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/puv/Logger.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/UIComposition.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/UIRoot.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/resources/interface/IDataDrivenUIRepository.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourceLoadManager;
class ResourcePackManager;
template<typename T0> class DDUIContainer;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Puv { class Logger; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace Puv { template<typename T0> class LoggerIterator; }
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
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Visibility; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class DataDrivenUIRepository : public ::IDataDrivenUIRepository, public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIRepository& operator=(DataDrivenUIRepository const&);
    DataDrivenUIRepository(DataDrivenUIRepository const&);
    DataDrivenUIRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DataDrivenUIRepository();

    virtual void load(::ResourcePackManager const&);

    virtual std::vector<std::variant<std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDivider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormImage>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSlider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContextList>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelText>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> const& getComposition(std::string const&) const;

    virtual ::mce::UUID const& getCompositionPackId(std::string const&) const;

    virtual std::vector<std::variant<std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Context>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const& getRoot(std::string const&) const;

    virtual ::mce::UUID const& getRootPackId(std::string const&) const;

    virtual std::vector<std::variant<std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDivider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormImage>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSlider>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::FormTextField>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ContextList>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::PanelText>, std::shared_ptr<SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> getExtensionPointContents(std::string const&) const;

    virtual ::Bedrock::PubSub::Subscription subscribeToOnCompositionsReloadedAsync(std::function<void ()>&&);

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);

    virtual void onJsonResourcesChanged(::ResourcePackManager&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ResourcePackManager const&);

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
    // NOLINTEND
};
