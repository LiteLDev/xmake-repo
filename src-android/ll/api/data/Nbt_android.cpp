#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/nbt/CompoundTagVariant.h"

#include <stdexcept>
#include <type_traits>

namespace {
using Variant = CompoundTagVariant::Variant;
static_assert(sizeof(Variant) == sizeof(CompoundTagVariant));
static_assert(alignof(Variant) == alignof(CompoundTagVariant));

Variant const& storage(CompoundTagVariant const& value) { return value.mTagStorage.as<Variant>(); }
}

CompoundTagVariant& CompoundTag::operator[](std::string_view key) {
    auto const& values = rawView();
    auto found = values.find(key);
    if (found == values.end()) {
        // Preserve the original operator[]'s missing-key EndTag semantics.
        auto tag = Tag::newTag(Tag::Type::End);
        if (!tag) throw std::system_error(tag.error().code());
        put(std::string(key), std::move(*tag));
        found = values.find(key);
        if (found == values.end()) throw std::runtime_error("failed to insert nbt key");
    }
    return const_cast<CompoundTagVariant&>(found->second);
}

CompoundTagVariant const& CompoundTag::operator[](std::string_view key) const {
    auto const& values = rawView();
    auto found = values.find(key);
    if (found == values.end()) throw std::out_of_range("invalid nbt key");
    return found->second;
}

CompoundTagVariant& CompoundTagVariant::operator=(bool value) {
    auto tag = Tag::newTag(Tag::Type::Byte);
    if (!tag) throw std::system_error(tag.error().code());
    static_cast<ByteTag&>(**tag).data = static_cast<uchar>(value);
    emplace(std::move(**tag));
    return *this;
}

CompoundTagVariant& CompoundTagVariant::operator=(std::string value) {
    auto tag = Tag::newTag(Tag::Type::String);
    if (!tag) throw std::system_error(tag.error().code());
    static_cast<StringTag&>(**tag).data = std::move(value);
    emplace(std::move(**tag));
    return *this;
}

CompoundTagVariant& CompoundTagVariant::operator=(std::string_view value) { return *this = std::string(value); }

CompoundTagVariant::operator std::string const&() const { return std::get<StringTag>(storage(*this)).data; }
