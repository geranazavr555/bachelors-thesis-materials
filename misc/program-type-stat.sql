SELECT
	MAX(creationTime) AS mx,
	programTypeId
FROM
	Submission
WHERE
	creationTime < NOW() - INTERVAL 1 HOUR
	AND
	creationTime > NOW() - INTERVAL 2400 HOUR
	AND
	participantType != 'MANAGER'
GROUP BY
	programTypeId
ORDER BY
	mx DESC;

SELECT
	COUNT(*) AS cc,
	programTypeId
FROM
	Submission
WHERE
	creationTime < NOW() - INTERVAL 1 HOUR
	AND
	creationTime > NOW() - INTERVAL 2400 HOUR
	AND
	participantType != 'MANAGER'
GROUP BY
	programTypeId
ORDER BY
	cc DESC;

SELECT
	title
FROM
	ProgramType
WHERE
	id IN (
		54,	73,	61,	52,	74,	50,	59,	31,	80,	36,	70,	79,	43,	65,	60,	41,	32,	13,	75,	40,	34,	51,	55,	83,	 4,	
		26,	 7,	22,	27,	15,	57,	77,	 9,	 6,	28,	67,	56,	12,	 3,	17,	14,	62,	18,	68,	25,	21,	76,	19,	38,	82,	
		47,	20,	39,	33,	44,	37,	66,	69,	48,	72,	58
	);