#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/nbt/CompoundTagVariant.h"

static_assert(sizeof(Tag) == 8 && sizeof(CompoundTag) == 32);
static_assert(sizeof(CompoundTag::TagMap) == 24 && alignof(CompoundTag::TagMap) == 8);
static_assert(sizeof(CompoundTagVariant::Variant) == 48 && alignof(CompoundTagVariant::Variant) == 8);
static_assert(sizeof(CompoundTagVariant) == 48 && alignof(CompoundTagVariant) == 8);
