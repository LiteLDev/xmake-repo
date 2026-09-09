#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/BindingFactory.h"
#include "mc/deps/input/BindingFactoryMap.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftBindingFactoryMap : public ::BindingFactoryMap {
public:
    // MinecraftBindingFactoryMap inner types declare
    // clang-format off
    class NullBindingFactory;
    // clang-format on

    // MinecraftBindingFactoryMap inner types define
    class NullBindingFactory : public ::BindingFactory {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~NullBindingFactory();

        virtual std::function<bool()> getBooleanBinding(uint) const;

        virtual std::function<float()> getFloatBinding(uint) const;

        virtual std::function<std::string()> getStringBinding(uint) const;

        virtual std::function<glm::vec<2, float, (glm::qualifier)0>()> getPointBinding(uint) const;

        virtual std::function<RectangleArea()> getAreaBinding(uint) const;

        virtual std::function<void(RectangleArea)> getDynamicAreaBinding(uint) const;

        virtual std::function<void(float)> getFloatSetter(uint) const;

        virtual void setCustomAreaBinding(std::string const&, ::RectangleArea);

        virtual void removeCustomAreaBinding(std::string const&);

        virtual std::vector<uint> getCustomAreaBindingNames() const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::function<bool()> $getBooleanBinding(uint) const;

        MCNAPI std::function<float()> $getFloatBinding(uint) const;

        MCNAPI std::function<std::string()> $getStringBinding(uint) const;

        MCNAPI std::function<glm::vec<2, float, (glm::qualifier)0>()> $getPointBinding(uint) const;

        MCNAPI std::function<RectangleArea()> $getAreaBinding(uint) const;

        MCNAPI std::function<void(RectangleArea)> $getDynamicAreaBinding(uint) const;

        MCNAPI std::function<void(float)> $getFloatSetter(uint) const;

        MCNAPI void $setCustomAreaBinding(std::string const&, ::RectangleArea);

        MCNAPI void $removeCustomAreaBinding(std::string const&);

        MCNAPI std::vector<uint> $getCustomAreaBindingNames() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                      mCIDToClientMap;
    ::ll::TypedStorage<8, 8, ::MinecraftBindingFactoryMap::NullBindingFactory const> mNullBindingFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftBindingFactoryMap();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftBindingFactoryMap();

    virtual ::BindingFactory const& getBindingFactory(int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BindingFactory const& $getBindingFactory(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
