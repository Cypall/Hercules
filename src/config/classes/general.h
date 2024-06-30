/**
 * This file is part of Hercules.
 * http://herc.ws - http://github.com/HerculesWS/Hercules
 *
 * Copyright (C) 2012-2024 Hercules Dev Team
 * Copyright (C) Athena Dev Teams
 *
 * Hercules is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CONFIG_GENERAL_H
#define CONFIG_GENERAL_H

/**
 * Hercules configuration file (http://herc.ws)
 **/

/**
 * Default Magical Reflection Behavior
 * - When reflecting, reflected damage depends on gears caster is wearing, not target (official)
 * - When disabled damage depends on gears target is wearing, not caster. (old/eathena)
 * @values 1 (enabled) or 0 (disabled)
 **/
#define MAGIC_REFLECTION_TYPE 1

/**
 * Spirit Sphere Limitation
 **/
#define MAX_SPIRITBALL 15

/**
* Spirit Charm Limitation
**/
#define MAX_SPIRITCHARM 10

/**
 * Stellar Marks Limitation
 **/
#define MAX_STELLAR_MARKS 5

/**
 * Soul Ball Limitation
 **/
#define MAX_SOUL_BALL 20

/**
 * United Soul Limitation
 **/
#define MAX_UNITED_SOULS 12

/**
 * when enabled, reflect damage doesn't bypass devotion (and thus damage is passed to crusader)
 * uncomment to enable
 **/
//#define DEVOTION_REFLECT_DAMAGE

/**
 * When enabled, RENEWAL servers loads db/pre-re/autospell_db.conf instead of db/re/autospell_db.conf.
 *
 * This makes the autospell skill list and used levels follow Pre-RE version, but every other effect stays as renewal.
 *
 * More details:
 * - Maximum used level of a skill will follow Pre-RE, instead of the half autospell level of RE
 * - Bolt skills will stay at the maximum "enabled" level instead of random levels
 *
 * You may want to enable this if you have a client that can't support the list with more than 7 skills.
 */
//#define CLASSIC_AUTOSPELL_LIST

/**
 * No settings past this point
 **/

#endif // CONFIG_GENERAL_H
