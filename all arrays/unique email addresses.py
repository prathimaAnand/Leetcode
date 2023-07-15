class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        # split array store in 2 varibles
        # take 1st part, consider only characters if they match, stop if + is encountered

        # Hashset to remove duplicates
        # split array store in 2 variables
        # take characters before '+'
        # store values in Hashset 
        # send the length 

        # solving using built-in functions
        email_set = set()

        for i in emails:
            local, domain = i.split("@")
            local = local.split("+")[0]
            local = local.replace(".","")
            email_set.add((local, domain))
        return len(email_set)
