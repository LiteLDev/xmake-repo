#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class DataDrivenUIGenericNode : public ::OreUI::PropertyObject<OreUI::DataDrivenUIGenericNode> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mComponent;
    ::ll::UntypedStorage<8, 176> mText;
    ::ll::UntypedStorage<8, 176> mDynamicAttribs;
    ::ll::UntypedStorage<8, 104> mChildrenNodes;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIGenericNode& operator=(DataDrivenUIGenericNode const&);
    DataDrivenUIGenericNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenUIGenericNode();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenUIGenericNode(::OreUI::DataDrivenUIGenericNode const&);

    MCNAPI DataDrivenUIGenericNode(::OreUI::DataDrivenUIGenericNode&&);

    MCNAPI DataDrivenUIGenericNode(
        std::optional<std::string> const,
        std::optional<std::string> const,
        std::optional<std::string> const,
        std::vector<OreUI::DataDrivenUIGenericNode>
    );

    MCNAPI DataDrivenUIGenericNode(
        std::optional<std::string> const,
        std::optional<std::string> const,
        std::optional<std::string> const,
        ::OreUI::PropertyVector<OreUI::DataDrivenUIGenericNode, std::allocator<OreUI::DataDrivenUIGenericNode>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::DataDrivenUIGenericNode const&);

    MCNAPI void* $ctor(::OreUI::DataDrivenUIGenericNode&&);

    MCNAPI void* $ctor(
        std::optional<std::string> const,
        std::optional<std::string> const,
        std::optional<std::string> const,
        std::vector<OreUI::DataDrivenUIGenericNode>
    );

    MCNAPI void* $ctor(
        std::optional<std::string> const,
        std::optional<std::string> const,
        std::optional<std::string> const,
        ::OreUI::PropertyVector<OreUI::DataDrivenUIGenericNode, std::allocator<OreUI::DataDrivenUIGenericNode>> const&
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

} // namespace OreUI
