-- Copyright © 2008-2019 Pioneer Developers. See AUTHORS.txt for details
-- Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

local system = CustomSystem:new('Achernar', { 'STAR_B',  })
	:govtype('NONE')
	:short_desc('Small-scale prospecting. No registered settlements.')
	:long_desc([[]])

local achernar = CustomSystemBody:new("Achernar", 'STAR_B')
	:radius(f(15100,10000))
	:equatorial_to_polar_radius(f(156,100))
	:mass(f(21400,10000))
	:seed(2240761825)
	:temp(17429)
	:semi_major_axis(f(0,10000))
	:eccentricity(f(0,10000))
	:rotation_period(f(0,10000))
	:axial_tilt(fixed.deg2rad(f(0,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))

local achernara = CustomSystemBody:new("Achernar a", 'PLANET_TERRESTRIAL')
	:radius(f(11781,10000))
	:mass(f(16352,10000))
	:seed(3168245916)
	:temp(2565)
	:semi_major_axis(f(15162,10000))
	:eccentricity(f(2431,10000))
	:rotation_period(f(30417,10000))
	:axial_tilt(fixed.deg2rad(f(532,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(274,10000))
	:volcanicity(f(8701,10000))
	:atmos_density(f(17543,10000))
	:atmos_oxidizing(f(3115,10000))
	:ocean_cover(f(671,10000))
	:ice_cover(f(13,10000))
	:life(f(0,10000))

local achernarb = CustomSystemBody:new("Achernar b", 'PLANET_TERRESTRIAL')
	:radius(f(15865,10000))
	:mass(f(39933,10000))
	:seed(184185653)
	:temp(2652)
	:semi_major_axis(f(27953,10000))
	:eccentricity(f(669,10000))
	:rotation_period(f(19583,10000))
	:axial_tilt(fixed.deg2rad(f(2870,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(441,10000))
	:volcanicity(f(9582,10000))
	:atmos_density(f(24733,10000))
	:atmos_oxidizing(f(9098,10000))
	:ocean_cover(f(915,10000))
	:ice_cover(f(17,10000))
	:life(f(0,10000))

local achernarc = CustomSystemBody:new("Achernar c", 'PLANET_TERRESTRIAL')
	:radius(f(15761,10000))
	:mass(f(39151,10000))
	:seed(2281379265)
	:temp(5346)
	:semi_major_axis(f(46959,10000))
	:eccentricity(f(1082,10000))
	:rotation_period(f(67500,10000))
	:axial_tilt(fixed.deg2rad(f(4265,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(150,10000))
	:volcanicity(f(8201,10000))
	:atmos_density(f(65890,10000))
	:atmos_oxidizing(f(9856,10000))
	:ocean_cover(f(1221,10000))
	:ice_cover(f(11,10000))
	:life(f(0,10000))

local achernarc1 = CustomSystemBody:new("Achernar c 1", 'PLANET_TERRESTRIAL')
	:radius(f(712,10000))
	:mass(f(4,10000))
	:seed(922893881)
	:temp(520)
	:semi_major_axis(f(3,10000))
	:eccentricity(f(318,10000))
	:rotation_period(f(6634,10000))
	:axial_tilt(fixed.deg2rad(f(0,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(14,10000))
	:volcanicity(f(0,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(538,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernarc2 = CustomSystemBody:new("Achernar c 2", 'PLANET_TERRESTRIAL')
	:radius(f(1223,10000))
	:mass(f(18,10000))
	:seed(3422577525)
	:temp(520)
	:semi_major_axis(f(8,10000))
	:eccentricity(f(1563,10000))
	:rotation_period(f(23078,10000))
	:axial_tilt(fixed.deg2rad(f(0,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1754,10000))
	:volcanicity(f(12,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(331,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernard = CustomSystemBody:new("Achernar d", 'PLANET_GAS_GIANT')
	:radius(f(24193,10000))
	:mass(f(141594,10000))
	:seed(1189578289)
	:temp(420)
	:semi_major_axis(f(72036,10000))
	:eccentricity(f(135,10000))
	:rotation_period(f(52500,10000))
	:axial_tilt(fixed.deg2rad(f(798,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))

local achernard1 = CustomSystemBody:new("Achernar d 1", 'PLANET_TERRESTRIAL')
	:radius(f(492,10000))
	:mass(f(1,10000))
	:seed(3979179403)
	:temp(420)
	:semi_major_axis(f(11,10000))
	:eccentricity(f(296,10000))
	:rotation_period(f(19870,10000))
	:axial_tilt(fixed.deg2rad(f(0,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(415,10000))
	:volcanicity(f(1,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(7967,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernard2 = CustomSystemBody:new("Achernar d 2", 'PLANET_TERRESTRIAL')
	:radius(f(836,10000))
	:mass(f(6,10000))
	:seed(1579175202)
	:temp(420)
	:semi_major_axis(f(27,10000))
	:eccentricity(f(3869,10000))
	:rotation_period(f(78609,10000))
	:axial_tilt(fixed.deg2rad(f(9,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1886,10000))
	:volcanicity(f(5,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(4824,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernare = CustomSystemBody:new("Achernar e", 'PLANET_GAS_GIANT')
	:radius(f(59760,10000))
	:mass(f(2134179,10000))
	:seed(1247542602)
	:temp(233)
	:semi_major_axis(f(232489,10000))
	:eccentricity(f(4223,10000))
	:rotation_period(f(69167,10000))
	:axial_tilt(fixed.deg2rad(f(132,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))

local achernare1 = CustomSystemBody:new("Achernar e 1", 'PLANET_TERRESTRIAL')
	:radius(f(1461,10000))
	:mass(f(31,10000))
	:seed(4126669144)
	:temp(196)
	:semi_major_axis(f(24,10000))
	:eccentricity(f(374,10000))
	:rotation_period(f(16601,10000))
	:axial_tilt(fixed.deg2rad(f(0,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(938,10000))
	:volcanicity(f(14,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(4614,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernare2 = CustomSystemBody:new("Achernar e 2", 'PLANET_TERRESTRIAL')
	:radius(f(2306,10000))
	:mass(f(123,10000))
	:seed(3853172262)
	:temp(196)
	:semi_major_axis(f(38,10000))
	:eccentricity(f(1242,10000))
	:rotation_period(f(33802,10000))
	:axial_tilt(fixed.deg2rad(f(0,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1180,10000))
	:volcanicity(f(30,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(2611,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernare3 = CustomSystemBody:new("Achernar e 3", 'PLANET_TERRESTRIAL')
	:radius(f(3511,10000))
	:mass(f(433,10000))
	:seed(2537439924)
	:temp(196)
	:semi_major_axis(f(79,10000))
	:eccentricity(f(43,10000))
	:rotation_period(f(101584,10000))
	:axial_tilt(fixed.deg2rad(f(0,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1666,10000))
	:volcanicity(f(409,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(5633,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernare4 = CustomSystemBody:new("Achernar e 4", 'PLANET_TERRESTRIAL')
	:radius(f(3073,10000))
	:mass(f(290,10000))
	:seed(794509036)
	:temp(196)
	:semi_major_axis(f(123,10000))
	:eccentricity(f(111,10000))
	:rotation_period(f(193149,10000))
	:axial_tilt(fixed.deg2rad(f(32,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(550,10000))
	:volcanicity(f(148,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(9318,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernare5 = CustomSystemBody:new("Achernar e 5", 'PLANET_TERRESTRIAL')
	:radius(f(2211,10000))
	:mass(f(108,10000))
	:seed(3995465542)
	:temp(196)
	:semi_major_axis(f(189,10000))
	:eccentricity(f(648,10000))
	:rotation_period(f(242493,10000))
	:axial_tilt(fixed.deg2rad(f(116,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(715,10000))
	:volcanicity(f(64,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(6964,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernarf = CustomSystemBody:new("Achernar f", 'PLANET_GAS_GIANT')
	:radius(f(59657,10000))
	:mass(f(2123193,10000))
	:seed(1149516327)
	:temp(149)
	:semi_major_axis(f(568730,10000))
	:eccentricity(f(113,10000))
	:rotation_period(f(2917,10000))
	:axial_tilt(fixed.deg2rad(f(1786,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))

local achernarf1 = CustomSystemBody:new("Achernar f 1", 'PLANET_ASTEROID')
	:radius(f(270,10000))
	:mass(f(1,10000))
	:seed(4207186055)
	:temp(149)
	:semi_major_axis(f(47,10000))
	:eccentricity(f(746,10000))
	:rotation_period(f(46081,10000))
	:axial_tilt(fixed.deg2rad(f(41,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))

local achernarf2 = CustomSystemBody:new("Achernar f 2", 'PLANET_ASTEROID')
	:radius(f(366,10000))
	:mass(f(1,10000))
	:seed(524031511)
	:temp(149)
	:semi_major_axis(f(75,10000))
	:eccentricity(f(441,10000))
	:rotation_period(f(91913,10000))
	:axial_tilt(fixed.deg2rad(f(94,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))

local achernarf3 = CustomSystemBody:new("Achernar f 3", 'PLANET_TERRESTRIAL')
	:radius(f(456,10000))
	:mass(f(1,10000))
	:seed(3117189504)
	:temp(94)
	:semi_major_axis(f(140,10000))
	:eccentricity(f(585,10000))
	:rotation_period(f(81546,10000))
	:axial_tilt(fixed.deg2rad(f(724,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(857,10000))
	:volcanicity(f(0,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(2607,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernarf4 = CustomSystemBody:new("Achernar f 4", 'PLANET_TERRESTRIAL')
	:radius(f(803,10000))
	:mass(f(5,10000))
	:seed(1525196708)
	:temp(94)
	:semi_major_axis(f(250,10000))
	:eccentricity(f(1791,10000))
	:rotation_period(f(27500,10000))
	:axial_tilt(fixed.deg2rad(f(278,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1190,10000))
	:volcanicity(f(1,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(9883,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernarf5 = CustomSystemBody:new("Achernar f 5", 'PLANET_TERRESTRIAL')
	:radius(f(1152,10000))
	:mass(f(15,10000))
	:seed(1115295199)
	:temp(94)
	:semi_major_axis(f(466,10000))
	:eccentricity(f(1101,10000))
	:rotation_period(f(80000,10000))
	:axial_tilt(fixed.deg2rad(f(340,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1486,10000))
	:volcanicity(f(7,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(1841,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernarf6 = CustomSystemBody:new("Achernar f 6", 'PLANET_TERRESTRIAL')
	:radius(f(933,10000))
	:mass(f(8,10000))
	:seed(3758331517)
	:temp(94)
	:semi_major_axis(f(929,10000))
	:eccentricity(f(1812,10000))
	:rotation_period(f(64167,10000))
	:axial_tilt(fixed.deg2rad(f(2,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(808,10000))
	:volcanicity(f(3,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(3948,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernarf7 = CustomSystemBody:new("Achernar f 7", 'PLANET_TERRESTRIAL')
	:radius(f(3082,10000))
	:mass(f(293,10000))
	:seed(3774749175)
	:temp(94)
	:semi_major_axis(f(1895,10000))
	:eccentricity(f(558,10000))
	:rotation_period(f(46667,10000))
	:axial_tilt(fixed.deg2rad(f(474,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1102,10000))
	:volcanicity(f(249,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(6273,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

local achernarf8 = CustomSystemBody:new("Achernar f 8", 'PLANET_TERRESTRIAL')
	:radius(f(4098,10000))
	:mass(f(688,10000))
	:seed(1491501957)
	:temp(94)
	:semi_major_axis(f(4377,10000))
	:eccentricity(f(2136,10000))
	:rotation_period(f(7500,10000))
	:axial_tilt(fixed.deg2rad(f(3663,10000)))
	:rotational_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_phase_at_start(fixed.deg2rad(f(0,10000)))
	:orbital_offset(fixed.deg2rad(f(0,10000)))
	:metallicity(f(1197,10000))
	:volcanicity(f(653,10000))
	:atmos_density(f(0,10000))
	:atmos_oxidizing(f(6617,10000))
	:ocean_cover(f(0,10000))
	:ice_cover(f(0,10000))
	:life(f(0,10000))

system:bodies(achernar,
	{
	achernara,
	achernarb,
	achernarc,
	{
	achernarc1,
	achernarc2,
	},
	achernard,
	{
	achernard1,
	achernard2,
	},
	achernare,
	{
	achernare1,
	achernare2,
	achernare3,
	achernare4,
	achernare5,
	},
	achernarf,
	{
	achernarf1,
	achernarf2,
	achernarf3,
	achernarf4,
	achernarf5,
	achernarf6,
	achernarf7,
	achernarf8,
	},
	})

system:add_to_sector(4,-9,-16,v(0.0230,0.1430,0.8830))
